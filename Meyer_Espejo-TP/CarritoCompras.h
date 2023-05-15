#include "Header.h"
#include "Articulos.h"
#include <vector>


#ifndef _CARRITOCOMPRAS_H
#define _CARRITOCOMPRAS_H

class CarritoCompras {
public:
    CarritoCompras(static unsigned int Nro, vector<Articulos>listaarticulos,float descuento);
    ~CarritoCompras();
    void CalcMontoTotal();
    void set_MontoTotal(float montoTotal);
    float get_MontoTotal();
    bool set_ListaArticulos(vector<Articulos>listaNuevosArt);
    unsigned int get_Nro();

private:
    float MontoTotal;
    static unsigned int Nro;
    vector<Articulos>ListaArticulos;
    float descuento;
};

#endif //_CARRITOCOMPRAS_H