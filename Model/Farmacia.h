/**
 * Project Untitled
 */


#ifndef _FARMACIA_H
#define _FARMACIA_H

#include "Articulos.h"


class Farmacia: public Articulos {
public: 
    
/**
 * @param eFarmacia
 * @param float
 * @param unsigned int
 */
void Farmacia(void eFarmacia, void float, void unsigned int);
    
enum get ArtFarm();
    
/**
 * @param eFarmacia artfarm
 */
enum setArtFarm(void eFarmacia artfarm);
protected: 
    
void Farmaceutico();
private: 
    eFarmacia ArtFarm;
};

#endif //_FARMACIA_H