#pragma once
#include "MiVector.h"
#include "Producto.h"

struct Item {
	Producto producto;
	int cant = 1;
	bool operator==(const Item& item) const {
		return item.producto == producto;
	}
};

class CarritoDeCompras {
private:
	MiVector<Item> productos;
public:
	CarritoDeCompras();

	void agregar(const Producto&);
	void eliminarProd(const Producto&);
	float total() const;

	operator MiVector<Item>() const;
};