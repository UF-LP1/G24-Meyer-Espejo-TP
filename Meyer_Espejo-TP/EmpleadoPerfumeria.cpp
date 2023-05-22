


#include "EmpleadoPerfumeria.h"
EmpleadoPerfumeria::EmpleadoPerfumeria(string nombre, string apellido, float sueldo) :Vendedor(nombre,apellido,sueldo) {}

EmpleadoPerfumeria::~EmpleadoPerfumeria() {}


//Redefino el metodo virtual en Perfumeria 
void EmpleadoPerfumeria:: revisionperf(Cliente MiCliente, vector<Articulos*>ListaArticuloslocal) {
    vector<eArticulosLocal>aux;
    aux = MiCliente.get_ProductosQuiero();
    Articulos* ptr_aux = nullptr;

    for (int i = 0; i < aux.size(); i++)
    {
        for (int j = 0; j < ListaArticuloslocal.size(); j++)
        {
            Articulos* nuevo= ListaArticuloslocal[j];
            ptr_aux = ListaArticuloslocal[j];

            if (int(aux[i]) > 2 && int(aux[i]) < 11) { //verfico que sea un Producto de Perfumeria
                if ((*ListaArticuloslocal[j]).get_Stock() > 1) //verifico q haya stock
                {
                    if (dynamic_cast<Perfumeria*>(ptr_aux) != NULL) 
                    {
                        //aca agregar al carrito
                        Perfumeria AgregarProductoPerf();
                    }
                }
               
            }
        }

    }
}














