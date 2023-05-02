#pragma once
#include <string>
#include <array>
#include <Windows.h>

class Producto {
	std::string codigo, nombre, categoria, filename;
	float precio;
public:
	Producto();
	Producto(std::string cod, std::string name, std::string cat, std::string filename_, float price) : codigo(cod), nombre(name), categoria(cat), filename(filename_), precio(price) {};
	std::string getNombre();
	std::string getCategoria();
	std::string getCodigo();
	std::string getFilename();
	float getPrecio() const;
	bool operator==(const Producto& prod) const {
		return codigo == prod.codigo;
	}
};