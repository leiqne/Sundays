#include "Carrito.h"
using namespace std;

CarritoDeCompras::CarritoDeCompras() = default;

void CarritoDeCompras::agregar(const Producto& prod) {
	Item item{ prod, 1 };
	auto res = productos.find(item, [](Item& elemento, Item& buscado){
		return elemento.producto.getCodigo() == buscado.producto.getCodigo();
	});
	if (res == productos.end()) productos.push_back(item);
	else {
		std::cout << "ya van: " << res->cant << std::endl;
		res->cant++;
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