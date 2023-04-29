
#ifndef _ORTOPEDIA_H
#define _ORTOPEDIA_H

#include "Articulos.h"
#include "eArticuloOrt.h"


class Ortopedia : public Articulos {
public:
    Ortopedia(float precio,unsigned int Stock,enum eArticuloOrt ArtOrtop);
    ~Ortopedia();

   /* enum get_ArticuloOrt();
    enum setArtOrt(enum eArticuloOrt artOrtop);*/

private:
   enum eArticuloOrt ArtOrtop;
};

#endif //_ORTOPEDIA_H