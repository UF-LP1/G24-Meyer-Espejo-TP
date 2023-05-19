
#ifndef _PERFUMERIA_H
#define _PERFUMERIA_H

#include "Articulos.h"
#include "eArticuloPerf.h"
#include "Header.h"

class Perfumeria : public Articulos {

public:
    Perfumeria(float precio, unsigned int stock,unsigned int codigo, eNecesidad tipoarticulo,string size,enum eArticuloPerf artPerf);
    ~Perfumeria();
    eArticuloPerf get_ArticuloPerf();
  

private:
    enum eArticuloPerf ArtPerf;
    string Size;
};

#endif //_PERFUMERIA_