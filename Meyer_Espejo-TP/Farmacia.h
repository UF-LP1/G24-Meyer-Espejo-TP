#ifndef _FARMACIA_H
#define _FARMACIA_H

#include "Articulos.h"
#include "eFarmacia.h"
#include "Header.h"

class Farmacia : public Articulos {
public:
    Farmacia(float precio, unsigned int stock, unsigned int codigo, eNecesidad tipoarticulo, enum eFarmacia artFarm, bool receta);
    ~Farmacia();
   eFarmacia get_ArtFarm();
   bool get_ObligReceta();
   float get_Precio();
   unsigned int get_Codigo();
   unsigned int get_Stock();
   float get_Precio();
   unsigned int get_Stock();
   unsigned int get_Codigo();

private:
    eFarmacia ArtFarm;
    bool ConReceta; 
};

#endif //_FARMACIA_H