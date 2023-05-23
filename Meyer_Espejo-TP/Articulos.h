
#include "Header.h"
#include "eNecesidad.h"
#include "eArticulosLocal.h"
#ifndef _ARTICULOS_H
#define _ARTICULOS_H



class Articulos {

public:
    Articulos(float precio, unsigned int stock,unsigned int Codigo,eNecesidad tipoarticulo,enum eArticulosLocal _articuloslocal);
    Articulos(float precio, unsigned int stock, unsigned int Codigo, eNecesidad tipoarticulo);
    ~Articulos();
         
   virtual float get_Precio();
  virtual unsigned int get_Stock();
   virtual unsigned int get_Codigo();
    void set_Precio(float precio);
    void set_Stock(unsigned int stock);
   eNecesidad get_TipoArticulo();
   eArticulosLocal get_articuloslocal();

protected:
    unsigned int Codigo;
    float Precio;
    unsigned int Stock;
    eNecesidad TipoArticulo;
    eArticulosLocal articuloslocal; // a tener en cuenta, del 0-14 son articulos que tiene el local
};

#endif //_ARTICULO