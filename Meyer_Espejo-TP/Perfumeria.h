
#ifndef _PERFUMERIA_H
#define _PERFUMERIA_H

#include "Articulos.h"
#include "eArticuloPerf.h"

class Perfumeria : public Articulos {

public:
    Perfumeria();
    ~Perfumeria();
    enum get_ArticuloPerf();
    void set_ArticuloPerf(eArticuloPerf artPerf);

private:
    enum eArticuloPerf ArtPerf;
    string Size;
};

#endif //_PERFUMERIA_