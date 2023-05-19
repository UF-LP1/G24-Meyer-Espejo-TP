
#include "Header.h"
#include "eNecesidad.h"
#ifndef _ARTICULOS_H
#define _ARTICULOS_H



class Articulos {

public:
    Articulos(float precio, unsigned int stock,unsigned int Codigo,eNecesidad tipoarticulo,enum eArticulosLocal _articuloslocal);
    ~Articulos();
    
        
    float get_Precio();
  unsigned int get_Stock();
   unsigned int get_Codigo();
   void set_Precio(float precio);
   void set_Stock(unsigned int stock);
   eNecesidad get_TipoArticulo();

protected:
    unsigned int Codigo;
    float Precio;
    unsigned int Stock;
    eNecesidad TipoArticulo;
    eArticulosLocal articuloslocal;
};

#endif //_ARTICULO