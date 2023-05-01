#include "funciones.h"

using namespace std;

MiVector<Producto>* Funciones::CargarProductos(string path ){
    csv::Parser file = csv::Parser(path);
    MiVector<Producto>* prods = new MiVector<Producto>();
    int size = file.rowCount();
    for (int i = 0; i < size; i++) {
        string cod = file[i]["Codigo"];
        string nombre= file[i]["Producto"];
        string categoria = file[i]["Categoria"];
        string filename = file[i]["imagen"];
        float precio = stoi(string(file[i]["Precio"]).c_str());
        prods->push_back(Producto(cod, nombre, categoria, filename, precio));
    }

    return prods;
}
