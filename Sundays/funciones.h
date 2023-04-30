#pragma once
#include <iostream>
#include "MiVector.h"
#include "Producto.h"
#include "CSVparser.hpp"

namespace Funciones {

    MiVector<Producto>* CargarProductos(std::string path);
};
