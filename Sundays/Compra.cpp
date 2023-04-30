#include "Compra.h"
#include "Crypt.h"
#include "CSVparser.hpp"
#include <ctime>
#include <iomanip>

Compra::Compra() = default;

Compra::Compra(Cliente client, const CarritoDeCompras& carrito_) : cliente(client), carrito(carrito_) {};

void Compra::Guardar(){
	csv::Parser file = csv::Parser(filename);
	UUID = Cripto::generateUUID();

	auto t = std::time(nullptr);
	auto tm = *std::localtime(&t);

	std::ostringstream oss;
	oss << std::put_time(&tm, "%d-%m-%Y %H-%M-%S");
	string fecha = oss.str();

	vector<string> row = { UUID, cliente.getUUID(), to_string(monto), fecha};
	
	file.addRow(file.rowCount(), row);
	file.sync();
}