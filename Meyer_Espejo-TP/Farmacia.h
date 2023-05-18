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
   vector<Farmacia> get_ArticulosFarm();

private:
    eFarmacia ArtFarm;
    vector<Farmacia>ArticulosFarm; //cuidado no esta incluido en el constructor
    bool ConReceta; 
};

#endif //_FARMACIA_H