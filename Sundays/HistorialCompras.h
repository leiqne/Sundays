#pragma once
#include "Lista.h"
#include "Compra.h"
#include "Cliente.h"
#include "CSVparser.hpp"

class HistorialCompras : public Compra {
	Lista<Compra> historial;
public:
	HistorialCompras() = default;
	Lista<Compra> load(MiVector<Producto>& productos, Cliente cliente) {
		csv::Parser file = csv::Parser(filename);
		int size = file.rowCount();
		for (int i = 0; i < size; i++) {
			auto fila = file[i];
			std::string data[] = { fila["uuid"], fila["cliente_uuid"], fila["productos"], fila["monto"], fila["fecha"]};
			historial.push_back(Compra::load(productos, data));
		}
	}
};