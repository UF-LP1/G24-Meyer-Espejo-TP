
#include "Header.h"

#ifndef _ARTICULOS_H
#define _ARTICULOS_H



class Articulos {

public:
    Articulos(float precio, unsigned int stock,unsigned int codigo);
    ~Articulos();
    
        
    float get_Precio();
    unsigned int get_Stock();
    unsigned int get_Codigo();

   void set_Precio(float precio);
   void set_Stock(unsigned int stock);

protected:
    unsigned int Codigo;
    float Precio;
    unsigned int Stock;

};

#endif //_ARTICULO