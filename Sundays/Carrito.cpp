#include "Carrito.h"

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