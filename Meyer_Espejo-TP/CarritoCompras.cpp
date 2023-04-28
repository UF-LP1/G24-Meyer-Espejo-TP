
#include "CarritoCompras.h"

CarritoCompras::CarritoCompras(float MontoTotal, unsigned int Nro) : Nro(Nro) {
    this->MontoTotal = MontoTotal;
}

CarritoCompras::~CarritoCompras() {}

float CarritoCompras::CalcMontoTotal(ListaArticulos) {
    float monto = 0;
    int Tamanio = 0;
    Tamanio = ListaArticulos.size();
    for (int i = 0; i < Tamanio; i++) {
        monto = monto + ListaArticulos[i].Precio;
    }



    return(monto);

}


void CarritoCompras::set_MontoTotal(float montoTotal) {
    this->MontoTotal = montoTotal;
}

float CarritoCompras::get_MontoTotal() {
    return this->MontoTotal;
}

bool CarritoCompras::AgregarArticulos(Articulos miArticulo) {

}

const unsigned int CarritoCompras::get_Nro() {
    return this->Nro;
}

