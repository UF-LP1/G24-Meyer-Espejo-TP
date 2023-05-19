


#include "EmpleadoPerfumeria.h"
EmpleadoPerfumeria::EmpleadoPerfumeria(string nombre, string apellido, float sueldo) :Vendedor(nombre,apellido,sueldo) {}

EmpleadoPerfumeria::~EmpleadoPerfumeria() {}



bool EmpleadoPerfumeria:: revisionperf(Cliente MiCliente) {
    vector<eArticulosLocal>aux;
    aux = MiCliente.get_ProductosQuiero();
    for (int i = 0; i < aux.size(); i++)
    {
        if (int(aux[i]) > 2 && int(aux[i])<11) {
            //aca agregar al carrito
            Perfumeria AgregarProductoPerf()
        }

    }



}














