#ifndef _FARMACIA_H
#define _FARMACIA_H

#include "Articulos.h"
#include "eFarmacia.h"

class Farmacia : public Articulos {
public:
    Farmacia(float Precio, unsigned int Stock,enum eFarmacia ArtFarm);
    ~Farmacia();
   // enum get_ArtFarm(enum eFarmacia ArtFarm);
   // void setArtFarm(enum eFarmacia artfarm);

private:
    enum eFarmacia ArtFarm;
};

#endif //_FARMACIA_H