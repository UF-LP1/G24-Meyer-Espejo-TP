


#include "EmpleadoOrtopedia.h"
#include "eArticulosLocal.h"

EmpleadoOrtopedia::EmpleadoOrtopedia(string nombre, string apellido, float sueldo) :Vendedor(nombre,apellido,sueldo) {

}
EmpleadoOrtopedia::~EmpleadoOrtopedia(){}





void EmpleadoOrtopedia:: revisionort(Cliente MiCliente, vector<Articulos*>ListaArticuloslocal) {
    vector<eArticulosLocal>aux;
    aux = MiCliente.get_ProductosQuiero();
    Articulos* ptr_aux = nullptr;

    for (int i = 0; i < aux.size(); i++)
    {
        for (int j = 0; j < ListaArticuloslocal.size(); j++)
        {
            Articulos* nuevo = ListaArticuloslocal[j];
            ptr_aux = ListaArticuloslocal[j];

            if (int(aux[i]) > 10 && int(aux[i]) < 15) { //verfico que sea un Producto de ortopedia
                if ((*ListaArticuloslocal[j]).get_Stock() > 1) //verifico q haya stock
                {
                    if (dynamic_cast<Ortopedia*>(ptr_aux) != NULL)
                    {
                        //aca agregar al carrito
                        Ortopedia AgregarProductoOrtop();
                    }
                }

            }
        }

    }
}


