


#include "EmpleadoPerfumeria.h"
EmpleadoPerfumeria::EmpleadoPerfumeria(string nombre, string apellido, float sueldo) :Empleado(nombre,apellido,sueldo) {}

EmpleadoPerfumeria::~EmpleadoPerfumeria() {}

//void EmpleadoPerfumeria::AsesorarPerfum(Articulos miArticulos) {}

void  revisionperf(Cliente MiCliente) {
    vector<Articulos>aux;
    aux = MiCliente.get_ProductosQuiero();
    for (int i = 0; i < aux.size(); i++)
    {
        if (aux[i].get_Stock() > 1) {
            //aca agregar al carrito
        }

    }



}



}










