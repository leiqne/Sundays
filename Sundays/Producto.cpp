#include "Producto.h"

using namespace std;

Producto::Producto() = default;

string Producto::getCodigo() { return codigo; }
string Producto::getNombre() { return nombre; }
string Producto::getCategoria() { return categoria; }
string Producto::getFilename() { return filename; };
float Producto::getPrecio() const { return precio; }
