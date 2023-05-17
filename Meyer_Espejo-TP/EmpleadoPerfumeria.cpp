


#include "EmpleadoPerfumeria.h"
EmpleadoPerfumeria::EmpleadoPerfumeria(string nombre, string apellido, float sueldo) :Empleado(nombre,apellido,sueldo) {}

EmpleadoPerfumeria::~EmpleadoPerfumeria() {}

//void EmpleadoPerfumeria::AsesorarPerfum(Articulos miArticulos) {}

void  revisionperf(Cliente MiCliente) {
    for (int i = 0; i < ProductosQuiero.size(); i++)
    {
        if (Cliente::ProductosQuiero[i].Stock == 1) {
            //aca agregar al carrito
       }
            
    }



}










