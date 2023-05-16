#include "Header.h"
#include "Articulos.h"
#include <vector>


#ifndef _CARRITOCOMPRAS_H
#define _CARRITOCOMPRAS_H

class CarritoCompras {
public:
    CarritoCompras(float montototal,static unsigned int Nro, vector<Articulos>listaarticulos,float descuento);
    ~CarritoCompras();
    void CalcMontoTotal();
    void set_MontoTotal(float montoTotal);
    float get_MontoTotal();
    void set_ListaArticulos(vector<Articulos>listaNuevosArt);
    unsigned int get_Nro();
    vector<Articulos> get_lista();

private:
    float MontoTotal;
    static unsigned int Nro;
    vector<Articulos>ListaArticulos;
    float Descuento;
};

#endif //_CARRITOCOMPRAS_H