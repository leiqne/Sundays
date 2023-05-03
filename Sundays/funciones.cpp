#include "funciones.h"

using namespace std;

MiVector<Producto>* Funciones::CargarProductos(string path ){      //recibe la imagen del producto
    csv::Parser file = csv::Parser(path);
    MiVector<Producto>* prods = new MiVector<Producto>();           //crear un vector de productos al cual se cargara
    int size = file.rowCount();                         //tamanio
    for (int i = 0; i < size; i++) {                       //recorrrer
        string cod = file[i]["Codigo"];                 //asignar cada valor a su variable
        string nombre= file[i]["Producto"];
        string categoria = file[i]["Categoria"];
        string filename = file[i]["imagen"];
        float precio = stoi(string(file[i]["Precio"]).c_str());         //convertir string a float;
        prods->push_back(Producto(cod, nombre, categoria, filename, precio));
        //agregar el producto con sus datos al vector 
    }
    return prods;
}
