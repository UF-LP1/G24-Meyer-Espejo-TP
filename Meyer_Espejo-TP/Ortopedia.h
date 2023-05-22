
#ifndef _ORTOPEDIA_H
#define _ORTOPEDIA_H

#include "Articulos.h"
#include "eArticuloOrt.h"
#include "Header.h"

class Ortopedia : public Articulos {
public:
    Ortopedia(float precio, unsigned int stock, unsigned int codigo, eNecesidad tipoarticulo,enum eArticuloOrt artOrtop);
    ~Ortopedia();
   eArticuloOrt get_ArticuloOrt();
   float get_Precio();
   unsigned int get_Stock();
   unsigned int get_Codigo();

private:
   enum eArticuloOrt ArtOrtop;
};

#endif //_ORTOPEDIA_H