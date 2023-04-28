#include "Compra.h"
#include "Crypt.h"
#include "CSVparser.hpp"

Compra::Compra() = default;

Compra::Compra(Cliente client, Lista<Producto> products) : cliente(client), productos(products) {};

void Compra::Guardar(){
	csv::Parser file = csv::Parser(filename);
	string uuid = Cripto::generateUUID();

	vector<string> row = { uuid, cliente.getUUID(), to_string(monto) };
	
	file.addRow(file.rowCount(), row);
	file.sync();
}