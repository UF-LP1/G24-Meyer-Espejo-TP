#include "Libreria.h"
#ifndef _CARRITOCOMPRAS_H
#define _CARRITOCOMPRAS_H

class CarritoCompras {
public:
    CarritoCompras(float MontoTotal, unsigned int Nro);
    ~CarritoCompras();
    float CalcMontoTotal(ListaArticulos);
    void set_MontoTotal(float montoTotal);
    float get_MontoTotal();
    bool AgregarArticulos(Articulos miArticulo);
    const unsigned int get_Nro();

private:
    float MontoTotal;
    const unsigned int Nro;
};

#endif //_CARRITOCOMPRAS_H