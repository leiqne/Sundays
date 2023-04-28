#pragma once
#include <iostream>
#include <string>

class Cliente {
	std::string filename = "usuarios.csv";
	std::string username, password, nombre, UUID;
public:
	Cliente();
	std::string getUUID();
	bool login(std::string username, std::string pass);
	bool registro(std::string username, std::string name, std::string password);
};