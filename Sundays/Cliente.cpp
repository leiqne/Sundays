#include "Cliente.h"
#include "Crypt.h"
#include "CSVparser.hpp"

using namespace std;

Cliente::Cliente() = default;

string Cliente::getUUID() { return UUID; }
string Cliente::getNombre() { return nombre; }

bool Cliente::login(string email, string pass) {
	csv::Parser file = csv::Parser(filename);
	int size = file.rowCount();
	pass = Cripto::SHA256(pass).toString();
	for (int i = 0; i < size; i++) {
		if (file[i]["email"] == email && file[i]["password"] == pass) {
			nombre = file[i]["nombre"];
			UUID = file[i]["uuid"];
			this->email = file[i]["email"];
			password = file[i]["password"];
			
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
		file.sync();

		nombre = name, password = pass;
		this->email = email;

		return true;
	} catch (const csv::Error &e) {
		std::cout << e.what() << std::endl;
		return false;
	}
}