


#include "EmpleadoPerfumeria.h"
EmpleadoPerfumeria::EmpleadoPerfumeria(string nombre, string apellido, float sueldo) :Vendedor(nombre,apellido,sueldo) {}

EmpleadoPerfumeria::~EmpleadoPerfumeria() {}



bool EmpleadoPerfumeria:: revisionperf(Cliente MiCliente) {
    vector<string>aux;
    aux = MiCliente.get_ProductosQuiero();
    for (int i = 0; i < aux.size(); i++)
    {
        if (aux[i] == e)
        {
            if (aux[i].get_Stock() > 1) {
                //aca agregar al carrito
                return true;
           
                //Perfumeria ArticuloAagregar(aux[i].get_Precio(), aux[i].get_Stock(),aux[i].get_Codigo(),aux[i].get_);
            }
        }
    }
}














