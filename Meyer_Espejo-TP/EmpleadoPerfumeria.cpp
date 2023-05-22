


#include "EmpleadoPerfumeria.h"
EmpleadoPerfumeria::EmpleadoPerfumeria(string nombre, string apellido, float sueldo) :Vendedor(nombre,apellido,sueldo) {}

EmpleadoPerfumeria::~EmpleadoPerfumeria() {}



void EmpleadoPerfumeria:: revisionperf(Cliente MiCliente, vector<Articulos*>ListaArticuloslocal) {
    vector<eArticulosLocal>aux;
    aux = MiCliente.get_ProductosQuiero();
    for (int i = 0; i < aux.size(); i++)
    {
        for (int j = 0; j < aux.size(); j++)
        {
            Articulos* nuevo= ListaArticuloslocal[i];
        
            if (int(aux[i]) > 2 && int(aux[i]) < 11) { //verfico que sea un Producto de Perfumeria
                if ((*ListaArticuloslocal[i]).get_Stock() > 1) //verifico q haya stock
                {
                    if (dynamic_cast<Perfumeria*>(*ListaArticuloslocal[i]) != NULL) //ayuda mailen
                    {
                        //aca agregar al carrito
                        Perfumeria AgregarProductoPerf();
                    }
                }
               
            }
        }

    }
}














