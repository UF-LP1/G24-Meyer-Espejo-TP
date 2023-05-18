


#include "EmpleadoOrtopedia.h"


EmpleadoOrtopedia::EmpleadoOrtopedia(string nombre, string apellido, float sueldo) :Vendedor(nombre,apellido,sueldo) {

}
EmpleadoOrtopedia::~EmpleadoOrtopedia(){}


//void EmpleadoOrtopedia::AsesorarArtOrtop(Articulos miArticulos) {
//
//}
//
//void EmpleadoOrtopedia::Empacar(Articulos miArticulos) {

//}
void EmpleadoOrtopedia:: revisionort(Cliente MiCliente) {
    vector<Articulos>aux;
    aux = MiCliente.get_ProductosQuiero();
    for (int i = 0; i < aux.size(); i++)
    {
        if (aux[i].get_Stock()>1) {
            //aca agregar al carrito
        }

    }



}


