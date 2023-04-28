#ifndef _FARMACIA_H
#define _FARMACIA_H

#include "Articulos.h"
#include "eFarmacia.h"

class Farmacia : public Articulos {
public:
    Farmacia(); //constructor por defecto
    ~Farmacia();
    enum get_ArtFarm(eFarmacia ArtFarm);
    void setArtFarm(eFarmacia artfarm);

private:
    eFarmacia ArtFarm;
};

#endif //_FARMACIA_H