


#include "EmpleadoOrtopedia.h"
#include "eArticulosLocal.h"

EmpleadoOrtopedia::EmpleadoOrtopedia(string nombre, string apellido, float sueldo) :Vendedor(nombre,apellido,sueldo) {

}
EmpleadoOrtopedia::~EmpleadoOrtopedia(){}





void EmpleadoOrtopedia:: revisionort(Cliente MiCliente, vector<Articulos*>ListaArticuloslocal) {
    vector<eArticulosLocal>aux;
    aux = MiCliente.get_ProductosQuiero();
    Articulos* ptr_aux = nullptr;
    CarritoCompras miCarrito = MiCliente.get_Carrito(); //lo copio en una variable asi se que es su carrito (simplicidad para escribir)
    for (int i = 0; i < aux.size(); i++)
    {
        for (int j = 0; j < ListaArticuloslocal.size(); j++)
        {
            Articulos* nuevo = ListaArticuloslocal[j];
            ptr_aux = ListaArticuloslocal[j];
            if (aux[i] == nuevo->get_articuloslocal()) {
                if (int(aux[i]) > 10 && int(aux[i]) < 15) { //verfico que sea un Producto de ortopedia
                    if ((*ListaArticuloslocal[j]).get_Stock() > 1) //verifico q haya stock
                    {
                        if (dynamic_cast<Ortopedia*>(ptr_aux) != NULL)
                        {
                            eArticuloOrt nombreEnum=dynamic_cast<Ortopedia*>(ptr_aux)->get_ArticuloOrt();
                            //aca agregar al carrito
                            Ortopedia AgregarProductoOrtop(nuevo->get_Precio(), nuevo->get_Stock(), nuevo->get_Codigo(), nuevo->get_TipoArticulo(),nombreEnum);
                            miCarrito.set_UnArticulo(AgregarProductoOrtop);
                            MiCliente.set_Carrito(miCarrito);
                        }
                    }

                }
            }
        }

    }
}


