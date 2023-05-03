#include "Carrito.h"
#include <sstream>
using namespace std;

CarritoDeCompras::CarritoDeCompras() = default;

CarritoDeCompras CarritoDeCompras::load(MiVector<Producto>& productos, string data) {
	istringstream iss(data);
	string linea;
	CarritoDeCompras carrito;
	while (getline(iss, linea, ';')) {
		stringstream ss(linea);
		
		string codigo, cant_str;
		getline(ss, codigo);
		getline(ss, cant_str);

		int cant = stoi(cant_str);
		Producto producto = productos.buscadorT([codigo](Producto prod) -> bool { return prod.getCodigo() == codigo; });
		carrito.agregar(Item{ producto, cant });
	}
	return carrito;
}

void CarritoDeCompras::agregar(const Item& item) {
	productos.push_back(item);
}

void CarritoDeCompras::agregar(const Producto& prod) { //const hace que el objeto no cambie su valor
	Item item{ prod, 1 };																							//1
	auto res = productos.find(item, [](Item& elemento, Item& buscado){				//5
		return elemento.producto.getCodigo() == buscado.producto.getCodigo();
	});
	if (res == productos.end()) 																			//2 + maxinterna
		productos.push_back(item);																	//1
	else {
		std::cout << "ya van: " << res->cant << std::endl;									//4
		res->cant++;																							//2
	}
}

void CarritoDeCompras::eliminarProd(const Producto& prod){
	Item item{ prod };
	auto res = productos.find(item, [](Item& elemento, Item& buscado) {
		return elemento.producto.getCodigo() == buscado.producto.getCodigo();
		});
	if (res != productos.end()) {
		if (res->cant == 1)
			productos.remove(item);
		else res->cant++;
	}
}

float CarritoDeCompras::total() const {
	int size = productos.size();
	float monto_total = 0;
	for (int i = 0; i < size; i++)
		monto_total += productos[i].cant * productos[i].producto.getPrecio();
	return monto_total;
}

string CarritoDeCompras::exportar() {
	int size = productos.size();
	string data;
	for (int i = 0; i < size; i++) {
		Item item = productos[i];
		Producto prod = item.producto;
		data += prod.getCodigo() + "/" + to_string(item.cant) + ";";
	}
	return data;
}