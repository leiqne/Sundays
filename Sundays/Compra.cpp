#include "Compra.h"
#include "Crypt.h"
#include "CSVparser.hpp"
#include <ctime>
#include <iomanip>

using namespace std;

Compra::Compra() = default;

Compra::Compra(Cliente client, const CarritoDeCompras& carrito_) : cliente(client), carrito(carrito_) {};

void Compra::Guardar(){
	csv::Parser file = csv::Parser(filename);
	UUID = Cripto::generateUUID();

	auto t = std::time(nullptr);
	auto tm = *std::localtime(&t);

	std::ostringstream oss;
	oss << std::put_time(&tm, "%d-%m-%Y %H-%M-%S");//para formatea la fecha
	string fecha = oss.str();

	auto row = { UUID, cliente.getUUID(), carrito.exportar(), to_string(monto), fecha };
	
	file.addRow(file.rowCount(), row);
	file.sync();
}

Compra Compra::load(MiVector<Producto>& productos, string const data []) {
	string uuid_cliente = data[1];
	Cliente cliente = Cliente();
	return Compra(cliente, CarritoDeCompras::load(productos, data[2]));
}