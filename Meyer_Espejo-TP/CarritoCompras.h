#include "Header.h"
#include "Articulos.h"
#include <vector>


#ifndef _CARRITOCOMPRAS_H
#define _CARRITOCOMPRAS_H

class CarritoCompras {
public:
    CarritoCompras(float montototal,unsigned int Nro, vector<Articulos>listaarticulos);
    CarritoCompras();
    ~CarritoCompras();
    void CalcMontoTotal();
    void set_MontoTotal(float montoTotal);
    float get_MontoTotal();
    void set_ListaArticulos(vector<Articulos>listaNuevosArt);
    unsigned int get_Nro();
    vector<Articulos> get_lista();
    void set_UnArticulo(Articulos nuevoArticulo);

private:
    float MontoTotal;
    unsigned int Nro;
    vector<Articulos>ListaArticulos;
    
};

#endif //_CARRITOCOMPRAS_H