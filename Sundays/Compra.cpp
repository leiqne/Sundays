#include "Compra.h"
#include "Crypt.h"
#include "CSVparser.hpp"
#include <ctime>
#include <iomanip>

using namespace std;

Compra::Compra() = default;

Compra::Compra(Cliente client, const CarritoDeCompras& carrito_) : cliente(client), carrito(carrito_) {};

void Compra::Guardar(){									
	csv::Parser file = csv::Parser(filename); //historial.csv
	UUID = Cripto::generateUUID();         //generamos el codigo de compra

	auto t = std::time(nullptr);					//hora
	auto tm = *std::localtime(&t);			//para saber la hora actual

	std::ostringstream oss;
	oss << std::put_time(&tm, "%d-%m-%Y %H-%M-%S");//para formatear la fecha cada vez que se haga una nueva compra
	string fecha = oss.str();

	auto row = { UUID, cliente.getUUID(), carrito.exportar(), to_string(carrito.total()), fecha }; //agregar a la fila todos los datos
	
	file.addRow(file.rowCount(), row);		//se agrega la fila creada anteriormente
	file.sync();                                               //se agrega todos los datos al archivo
}

Compra Compra::load(MiVector<Producto>& productos, string const data []) {
	string uuid_cliente = data[1];													//2
	Cliente cliente = Cliente();														//2
	return Compra(cliente, CarritoDeCompras::load(productos, data[2]));
}