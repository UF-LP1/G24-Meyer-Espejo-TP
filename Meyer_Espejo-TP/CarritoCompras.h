#include "Libreria.h"
#include "Articulos.h"

#ifndef _CARRITOCOMPRAS_H
#define _CARRITOCOMPRAS_H
//act
class CarritoCompras {
public:
    CarritoCompras(float MontoTotal, unsigned int Nro);
    ~CarritoCompras();
    float CalcMontoTotal(Articulos ListaPedido);
    //void set_MontoTotal(float montoTotal);
    float get_MontoTotal();
    bool AgregarArticulos(Articulos miArticulo,Articulos ListaArticulos,Articulos ListaPedido);
    //const unsigned int get_Nro();

private:
    float MontoTotal;
    const unsigned int Nro;
};

#endif //_CARRITOCOMPRAS_H