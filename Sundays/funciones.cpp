#include "funciones.h"
#include <functional>
#include <sstream>
#include <random>

using namespace std;

Lista<Producto>* Funciones::CargarProductos(string path ){
    csv::Parser file = csv::Parser(path);
    Lista<Producto>* prods = new Lista<Producto>();
    int size = file.rowCount();
    for (int i = 0; i < size; i++) {
        string cod = file[i]["Codigo"];
        string nombre= file[i]["Producto"];
        string categoria = file[i]["Categoria"];
        float precio = stoi(string(file[i]["Precio"]).c_str());
        prods->push_front(Producto(cod, nombre, categoria, precio));
    }

    return prods;
}
