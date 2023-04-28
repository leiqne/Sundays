#include "Cliente.h"
#include "Crypt.h"
#include "CSVparser.hpp"

using namespace std;

Cliente::Cliente() = default;

string Cliente::getUUID() { return UUID; }

bool Cliente::login(string username, string pass) {
	csv::Parser file = csv::Parser(filename);
	int size = file.rowCount();
	for (int i = 0; i < size; i++) {
		if (file[i]["username"] == username && file[i]["password"] == password) {
			nombre = file[i]["nombre"];
			UUID = file[i]["uuid"];
			this->username = file[i]["username"];
			password = Cripto::hash(file[i]["password"]);
			
			return true;
		}
	}
	return false;
}

bool Cliente::registro(string username, string name, string pass) {
	try {
		UUID = Cripto::generateUUID();
		csv::Parser file = csv::Parser(filename);
		pass = Cripto::hash(pass);
		int size = file.rowCount();

		vector<string> data = { UUID, username, name, pass };
		file.addRow(size, data);
		file.sync();

		nombre = name, password = pass;
		this->username = username;

		return true;
	} catch (const csv::Error &e) {
		std::cout << e.what() << std::endl;
		return false;
	}
}