#include "Carrito.h"
#include <sstream>
using namespace std;

CarritoDeCompras::CarritoDeCompras() = default;

CarritoDeCompras CarritoDeCompras::load(MiVector<Producto>& productos, string data) { // para leer el historial y generar el carrito de compras
	istringstream iss(data);
	string linea;
	CarritoDeCompras carrito;
	while (getline(iss, linea, ';')) {											//separe cada linea hasta que encuentre un ;
		stringstream ss(linea);						
		
		string codigo, cant_str;
		getline(ss, codigo, '/');												//guardar el codigo el texto hasta /
		getline(ss, cant_str);												//guardar la cantidad el texto restante

		int cant = stoi(cant_str);											//convertir el string cantidad a int
		Producto producto = productos.buscadorT([codigo](Producto prod) -> bool { return prod.getCodigo() == codigo; });
		//buscar el producto por su codigo y que nos retorne todo el producto
		carrito.agregar(Item{ producto, cant }); //agregar dicho producto al carrito
	}
	return carrito;
}

void CarritoDeCompras::agregar(const Item& item) {//agregar
	productos.push_back(item);
}

void CarritoDeCompras::agregar(const Producto& prod) { //const hace que el objeto no cambie su valor
	Item item{ prod, 1 };																							//1
	auto res = productos.find(item, [](Item& elemento, Item& buscado){ // busca el producto en el carrito de compras				//5
		return elemento.producto.getCodigo() == buscado.producto.getCodigo();
		//retorna un booleano si el codigo del producto a buscar es igual al producto o no
	});
	if (res == productos.end()) 																			//2 + maxinterna
		productos.push_back(item);																	//1
		//si no es igual, se agrega este producto	
	else {
		res->cant++;																							//2
		//si es igual, su cantidad se aumenta
	}
}

void CarritoDeCompras::eliminarProd(const Producto& prod){      //eliminar producto
	Item item{ prod };
	auto res = productos.find(item, [](Item& elemento, Item& buscado) {					//buscador por lambda
		return elemento.producto.getCodigo() == buscado.producto.getCodigo();	
		//retorna un booleano si el codigo del producto a buscar es igual al producto o no
		});
	if (res != productos.end()) {     // si solo hay 1 se elimina este 
		if (res->cant == 1)
			productos.remove(item); 
		else res->cant--;					//si hay un prducto del mismo tipo ya agregado, se le resta una cantidad
	}
}

float CarritoDeCompras::total() const {				//retornar la suma de montos de los productos en el carrito
	int size = productos.size();
	float monto_total = 0;
	for (int i = 0; i < size; i++)
		monto_total += productos[i].cant * productos[i].producto.getPrecio();
	return monto_total;
}

string CarritoDeCompras::exportar() {									//exportar los datos del carrito
	int size = productos.size();
	string data;
	for (int i = 0; i < size; i++) {
		Item item = productos[i];
		Producto prod = item.producto;
		data += prod.getCodigo() + "/" + to_string(item.cant) + ";";
	}
	return data;
}
