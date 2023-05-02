#pragma once
#include "Cliente.h"
#include "Carrito.h"
#include "Lista.h"
#include <iostream>
#include <string>
#include <functional>

class Compra {
protected:
	string filename = "compras.csv";
	float monto;
	std::string UUID, fecha;
	Cliente cliente;
	CarritoDeCompras carrito;
	static Compra load(MiVector<Producto>&, const std::string[]);
public:
	Compra();
	Compra(Cliente client, const CarritoDeCompras&);
	void Guardar();
};