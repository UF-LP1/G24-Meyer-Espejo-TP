
#include "CarritoCompras.h"
#include <vector>
#include "Articulos.h"



CarritoCompras::CarritoCompras(float montototal, unsigned int Nro, vector<Articulos>listaarticulos,float descuento) {
    for (int i = 0; i < listaarticulos.size(); i++)
    {
        this->ListaArticulos.push_back(listaarticulos[i]);
    }
    this->Nro = Nro;
    this->MontoTotal = montototal;
    this->Descuento = descuento;
}

CarritoCompras::~CarritoCompras() {
    
}



void CarritoCompras::CalcMontoTotal() {
    float monto = 0;
    for (int i = 0; i < ListaArticulos.size(); i++) {
        monto = monto + ListaArticulos[i].get_Precio();
    }
    set_MontoTotal(monto); //lo updateo en el atributo 
}


void CarritoCompras::set_MontoTotal(float montoTotal) {
    this->MontoTotal = montoTotal;
}

float CarritoCompras::get_MontoTotal() {
    return this->MontoTotal;
}

vector<Articulos> CarritoCompras:: get_lista() {
    return this->ListaArticulos;
}

void CarritoCompras::set_ListaArticulos(vector<Articulos>listaNuevosArt)
{
    for (int i = 0; i < listaNuevosArt.size(); i++)
    {
        ListaArticulos.push_back(listaNuevosArt[i]);
    }
    
}

void CarritoCompras:: set_UnArticulo(Articulos nuevoArticulo)
{
    this->ListaArticulos.push_back(nuevoArticulo);
}

unsigned int CarritoCompras::get_Nro() {
    return this-> Nro;
}

