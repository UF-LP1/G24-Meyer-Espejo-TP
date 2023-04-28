/**
 * Project Untitled
 */


#ifndef _EMPLEADOORTOPEDIA_H
#define _EMPLEADOORTOPEDIA_H

#include "Empleado.h"


class EmpleadoOrtopedia: public Empleado {
public: 
    
/**
 * @param string
 * @param string
 * @param date
 * @param float
 */
void EmpleadoOrtopedia(void string, void string, void date, void float);
    
/**
 * @param miArticulos
 */
void AsesorarArtOrtop(Articulos miArticulos);
    
/**
 * @param miArticulos
 */
void Empacar(Articulos miArticulos);
protected: 
    
void EmpleadoOrtopedia();
};

#endif //_EMPLEADOORTOPEDIA_H