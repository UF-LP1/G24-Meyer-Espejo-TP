


#include "EmpleadoPerfumeria.h"
EmpleadoPerfumeria::EmpleadoPerfumeria(string nombre, string apellido, float sueldo) :Vendedor(nombre,apellido,sueldo) {}

EmpleadoPerfumeria::~EmpleadoPerfumeria() {}



void EmpleadoPerfumeria:: revisionperf(Cliente MiCliente) {
    vector<Articulos>aux;
    aux = MiCliente.get_ProductosQuiero();
    for (int i = 0; i < aux.size(); i++)
    {
        if (aux[i].get_Stock() > 1) {
            //aca agregar al carrito
            Articulos ArticuloAagregar(aux[i].get_Codigo(), aux[i].get_Precio(), aux[i].get_Stock());
        }

    }

   

}














