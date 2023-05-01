#pragma once
#include "Lista.h"
#include "Compra.h"

class HistorialCompras {
	Lista<Compra> historial;
public:
	HistorialCompras() = default;
};