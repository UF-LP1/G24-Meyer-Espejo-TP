
#include "CarritoCompras.h"
#include <vector>
#include "Articulos.h"


CarritoCompras::CarritoCompras( unsigned int Nro, vector<Articulos>listaarticulos) : Nro(Nro) {
    for (int i = 0; i < listaarticulos.size(); i++)
    {
        this->ListaArticulos.push_back(listaarticulos[i]);
    }
    this->MontoTotal = 0;
}

CarritoCompras::~CarritoCompras() {}



float CarritoCompras::CalcMontoTotal(vector<Articulos>ListaArticulos) {
    float monto = 0;
    int Tamanio = 0;
    Tamanio = ListaArticulos.size();
    for (int i = 0; i < Tamanio; i++) {
        monto = monto + ListaArticulos[i].get_Precio();
    }
    monto = monto;
    return(monto);

}


//void CarritoCompras::set_MontoTotal(float montoTotal) {
//    this->MontoTotal = montoTotal;
//}

float CarritoCompras::get_MontoTotal() {
    return this->MontoTotal;
}

bool CarritoCompras::set_ListaArticulos(vector<Articulos>listaNuevosArt)
{
    for (int i = 0; i < listaNuevosArt.size(); i++)
    {
        ListaArticulos.push_back(listaNuevosArt[i]);
        return true;
    }
    return false;
}

//const unsigned int CarritoCompras::get_Nro() {
//    return this->Nro;
//}*/

