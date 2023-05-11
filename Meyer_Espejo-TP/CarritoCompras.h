#include "Libreria.h"
#include "Articulos.h"
#include <vector>


#ifndef _CARRITOCOMPRAS_H
#define _CARRITOCOMPRAS_H
//act
class CarritoCompras {
public:
    CarritoCompras(unsigned int Nro, vector<Articulos>listaarticulos);
    ~CarritoCompras();
    float CalcMontoTotal(vector<Articulos>ListaArticulos);
    //void set_MontoTotal(float montoTotal);
    float get_MontoTotal();
    bool set_ListaArticulos(vector<Articulos>listaNuevosArt);
    //const unsigned int get_Nro();

private:
    float MontoTotal;
    const unsigned int Nro;
    vector<Articulos>ListaArticulos;

};

#endif //_CARRITOCOMPRAS_H