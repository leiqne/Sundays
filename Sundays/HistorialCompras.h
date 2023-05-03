#pragma once
#include "Lista.h"
#include "Compra.h"
#include "Cliente.h"
#include "CSVparser.hpp"

class HistorialCompras : public Compra {
	Lista<Compra> historial;
public:
	HistorialCompras() = default;
	HistorialCompras(Cliente client, const CarritoDeCompras& carrito):Compra(client,carrito) {}
	Lista<Compra> load(MiVector<Producto>& productos, Cliente cliente) { //cargar al historial de compras
		csv::Parser file = csv::Parser(filename);										//2
		//historial csv
		int size = file.rowCount();															//2
		for (int i = 0; i < size; i++) {														//1+n(1+interna+2)
			auto fila = file[i];																		//2
			std::string data[] = { fila["uuid"], fila["cliente_uuid"], fila["productos"], fila["monto"], fila["fecha"]};//6
			//asignar valores al arreglo
			historial.push_back(Compra::load(productos, data));			//1
			//cargar los elementos
		}
	}
};