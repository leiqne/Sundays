#include "Cliente.h"
#include "Crypt.h"
#include "CSVparser.hpp"

using namespace std;

Cliente::Cliente() = default;

string Cliente::getUUID() { return UUID; }
string Cliente::getNombre() { return nombre; }

bool Cliente::login(string email, string pass) {
	csv::Parser file = csv::Parser(filename);													//2
	int size = file.rowCount();																		//2
	pass = Cripto::SHA256(pass).toString();												//3
	for (int i = 0; i < size; i++) {																	//1+n(1+intena+2)
		if (file[i]["email"] == email && file[i]["password"] == pass) {		//7 + maxinterna
			nombre = file[i]["nombre"];															//3
			UUID = file[i]["uuid"];																	//3
			this->email = file[i]["email"];															//4
			password = file[i]["password"];														//3			
			return true;
		}
	}
	return false;
}

bool Cliente::registro(string email, string name, string pass) {
	try {
		UUID = Cripto::generateUUID();
		csv::Parser file = csv::Parser(filename);
		pass = Cripto::SHA256(pass).toString();
		int size = file.rowCount();

		vector<string> data = { UUID, email, name, pass };
		file.addRow(size, data);
		file.sync(); // guarda los datos en el csv

		nombre = name, password = pass;
		this->email = email;

		return true;
	} catch (const csv::Error &e) {
		std::cout << e.what() << std::endl;
		return false;
	}
}