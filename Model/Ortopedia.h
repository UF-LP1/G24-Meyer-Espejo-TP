/**
 * Project Untitled
 */


#ifndef _ORTOPEDIA_H
#define _ORTOPEDIA_H

#include "Articulos.h"


class Ortopedia: public Articulos {
public: 
    
/**
 * @param eArticuloOrt
 * @param float
 * @param unsigned in int
 */
void Ortopedia(void eArticuloOrt, void float, void unsigned in int);
    
enum get ArticuloOrt();
    
/**
 * @param eArticuloOrt ArtOrtop
 */
enum setArtOrt(void eArticuloOrt ArtOrtop);
protected: 
    
void Ortopedia();
private: 
    eArticuloOrt ArtOrtop;
};

#endif //_ORTOPEDIA_H