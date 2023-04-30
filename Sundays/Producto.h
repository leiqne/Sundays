#pragma once
#include <string>
#include <array>

class Producto {
	std::string codigo, nombre, categoria;
	float precio;
public:
	Producto();
	Producto(std::string cod, std::string name, std::string cat, float price) : codigo(cod), nombre(name), categoria(cat), precio(price) {};
	Producto(std::array<std::string, 4>);
	std::string getNombre();
	std::string getCategoria();
	std::string getCodigo();
	float getPrecio();
	bool operator==(const Producto& prod) const {
		return codigo == prod.codigo;
	}
};