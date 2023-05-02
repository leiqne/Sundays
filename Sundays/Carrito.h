#pragma once
#include "MiVector.h"
#include "Producto.h"
#include <iostream>

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
	static CarritoDeCompras load(MiVector<Producto>& productos, std::string data);
	void agregar(const Producto&);
	void agregar(const Item&);
	void eliminarProd(const Producto&);
	std::string exportar();
	float total() const;
	operator MiVector<Item>() const;
};