#pragma once
#include "Cliente.h"
#include "Producto.h"
#include "Lista.h"
#include <iostream>
#include <string>
#include <functional>

class Compra {
	string filename = "compras.csv";
	float monto;
	std::string hash, fecha;
	Cliente cliente;
	Lista<Producto> productos;
public:
	Compra();
	Compra(Cliente client, Lista<Producto> products);
	void Guardar();
};