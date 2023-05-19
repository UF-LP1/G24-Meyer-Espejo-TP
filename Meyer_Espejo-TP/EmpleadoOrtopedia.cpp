


#include "EmpleadoOrtopedia.h"
#include "eArticulosLocal.h"

EmpleadoOrtopedia::EmpleadoOrtopedia(string nombre, string apellido, float sueldo) :Vendedor(nombre,apellido,sueldo) {

}
EmpleadoOrtopedia::~EmpleadoOrtopedia(){}





void EmpleadoOrtopedia:: revisionort(Cliente MiCliente) {
    vector<eArticulosLocal>aux;
    aux = MiCliente.get_ProductosQuiero();
    for (int i = 0; i < aux.size(); i++)
    {
        if (aux[i] > 10 && aux[i] <15 ) {
            //aca agregar al carrito
        }

    }



}


