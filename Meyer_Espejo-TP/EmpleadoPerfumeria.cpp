


#include "EmpleadoPerfumeria.h"
EmpleadoPerfumeria::EmpleadoPerfumeria(string nombre, string apellido, float sueldo) :Vendedor(nombre,apellido,sueldo) {}

EmpleadoPerfumeria::~EmpleadoPerfumeria() {}


//Redefino el metodo virtual en Perfumeria 
void EmpleadoPerfumeria:: revisionperf(Cliente *MiCliente, vector<Articulos*>ListaArticuloslocal) {
    vector<eArticulosLocal>aux;
    aux = MiCliente->get_ProductosQuiero();
    Articulos* ptr_aux = nullptr;
    CarritoCompras *miCarrito = &MiCliente->get_Carrito(); //lo copio en una variable asi se que es su carrito (simplicidad para escribir)

    for (int i = 0; i < aux.size(); i++)
    {
        for (int j = 0; j < ListaArticuloslocal.size(); j++)
        {
            Articulos* nuevo= ListaArticuloslocal[j];
            ptr_aux = ListaArticuloslocal[j];
            if (aux[i] == nuevo->get_articuloslocal()) {

                if (int(aux[i]) > 2 && int(aux[i]) < 11) { //verfico que sea un Producto de Perfumeria
                    if ((*ListaArticuloslocal[j]).get_Stock() > 1) //verifico q haya stock
                    {
                        if (dynamic_cast<Perfumeria*>(ptr_aux) != NULL)
                        {
                            eArticuloPerf nombreEnum = dynamic_cast<Perfumeria*>(ptr_aux)->get_ArticuloPerf();
                            string tamanio = dynamic_cast<Perfumeria*>(ptr_aux)->get_Size();
                            //aca agregar al carrito
                            Perfumeria AgregarProductoPerf(nuevo->get_Precio(),nuevo->get_Stock(),nuevo->get_Codigo(),nuevo->get_TipoArticulo(),tamanio,nombreEnum);
                           miCarrito->set_UnArticulo(AgregarProductoPerf);
                            MiCliente->set_Carrito(*miCarrito);
                        }
                    }

                }
            }
        }

    }
}














