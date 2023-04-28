#pragma once
#include <iostream>
#include "Lista.h"
#include "Producto.h"
#include "CSVparser.hpp"

namespace Funciones {

    Lista<Producto>* CargarProductos(std::string path);
};
