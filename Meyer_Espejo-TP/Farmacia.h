#ifndef _FARMACIA_H
#define _FARMACIA_H

#include "Articulos.h"
#include "eFarmacia.h"
#include "Header.h"

class Farmacia : public Articulos {
public:
    Farmacia(float precio, unsigned int stock, unsigned int codigo, enum eFarmacia artFarm, bool receta);
    ~Farmacia();
   eFarmacia get_ArtFarm();
   bool get_ObligReceta();

private:
    enum eFarmacia ArtFarm;
    bool ConReceta; 
};

#endif //_FARMACIA_H