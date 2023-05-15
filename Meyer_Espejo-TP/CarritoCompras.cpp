
#include "CarritoCompras.h"
#include <vector>
#include "Articulos.h"


CarritoCompras::CarritoCompras( static unsigned int Nro, vector<Articulos>listaarticulos,float descuento) {
    for (int i = 0; i < listaarticulos.size(); i++)
    {
        this->ListaArticulos.push_back(listaarticulos[i]);
    }
    Nro++; //por ser static
    CalcMontoTotal();
    descuento = Empleado.set_PrecioFinal(CarritoCompras miCarrito);
}

CarritoCompras::~CarritoCompras() {
    Nro --; //por ser static
}



void CarritoCompras::CalcMontoTotal() {
   
    for (int i = 0; i < ListaArticulos.size(); i++) {
        MontoTotal = MontoTotal + ListaArticulos[i].get_Precio();
    }
}


void CarritoCompras::set_MontoTotal(float montoTotal) {
    this->MontoTotal = montoTotal;
}

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

unsigned int CarritoCompras::get_Nro() {
    return Nro;
}

