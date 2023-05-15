
#ifndef _PERFUMERIA_H
#define _PERFUMERIA_H

#include "Articulos.h"
#include "eArticuloPerf.h"
#include "Header.h"

class Perfumeria : public Articulos {

public:
    Perfumeria(float precio, unsigned int stock,unsigned int codigo, string size,enum eArticuloPerf artPerf);
    ~Perfumeria();
    /*enum get_ArticuloPerf();
    void set_ArticuloPerf(enum eArticuloPerf artPerf);*/

private:
    enum eArticuloPerf ArtPerf;
    string Size;
};

#endif //_PERFUMERIA_