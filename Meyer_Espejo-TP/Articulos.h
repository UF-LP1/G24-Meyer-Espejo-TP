
//listo
#include "Libreria.h"
#ifndef _ARTICULOS_H
#define _ARTICULOS_H



class Articulos {

public:
    Articulos(float Precio, unsigned int Stock,unsigned int Codigo);
    ~Articulos();
    
        
    float get_Precio();
    unsigned int get_Stock();

   /* void set_Precio(float precio);
    void set_Stock(unsigned int stock);*/

protected:
    unsigned int Codigo;
    float Precio;
    unsigned int Stock;

};

#endif //_ARTICULO