
#ifndef _ORTOPEDIA_H
#define _ORTOPEDIA_H

#include "Articulos.h"
#include "eArticuloOrt.h"


class Ortopedia : public Articulos {
public:
    Ortopedia(float precio, unsigned int stock, unsigned int codigo,enum eArticuloOrt artOrtop);
    ~Ortopedia();

   /* enum get_ArticuloOrt();
    enum setArtOrt(enum eArticuloOrt artOrtop);*/

private:
   enum eArticuloOrt ArtOrtop;
};

#endif //_ORTOPEDIA_H