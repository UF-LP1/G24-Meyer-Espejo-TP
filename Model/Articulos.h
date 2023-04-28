/**
 * Project Untitled
 */


#ifndef _ARTICULOS_H
#define _ARTICULOS_H

#include "Farmacia.h"
#include "Perfumeria.h"
#include "Ortopedia.h"


class Articulos: public Farmacia, public Perfumeria, public Ortopedia {
public: 
    
/**
 * @param float
 * @param unsigned int
 */
void Articulos(void float, void unsigned int);
    
float getPrecio();
    
/**
 * @param float Precio
 */
float setPrecio(void float Precio);
    
unsigned int getStock();
    
/**
 * @param unsigned int Stock
 */
float setStock(void unsigned int Stock);
protected: 
    float Precio;
    unsigned int Stock;
    
void Articulos();
};

#endif //_ARTICULOS_H