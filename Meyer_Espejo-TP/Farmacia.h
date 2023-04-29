#ifndef _FARMACIA_H
#define _FARMACIA_H

#include "Articulos.h"
#include "eFarmacia.h"

class Farmacia : public Articulos {
public:
    Farmacia(float precio, unsigned int stock, unsigned int codigo, enum eFarmacia artFarm);
    ~Farmacia();
   // enum get_ArtFarm(enum eFarmacia ArtFarm);
   // void setArtFarm(enum eFarmacia artfarm);

private:
    enum eFarmacia ArtFarm;
};

#endif //_FARMACIA_H