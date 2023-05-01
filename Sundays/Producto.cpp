#include "Producto.h"

using namespace std;

Producto::Producto() = default;
Producto::Producto(array<string, 4> arr) : codigo(arr[0]), nombre(arr[1]), categoria(arr[2]), precio(stoi(arr[3])) {};

string Producto::getCodigo() { return codigo; }
string Producto::getNombre() { return nombre; }
string Producto::getCategoria() { return categoria; }
float Producto::getPrecio() const { return precio; }
