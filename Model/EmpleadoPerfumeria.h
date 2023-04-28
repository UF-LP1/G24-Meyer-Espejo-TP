/**
 * Project Untitled
 */


#ifndef _EMPLEADOPERFUMERIA_H
#define _EMPLEADOPERFUMERIA_H

#include "Empleado.h"


class EmpleadoPerfumeria: public Empleado {
public: 
    
/**
 * @param string
 * @param string
 * @param date
 * @param float
 */
void EmpleadoPerfumeria(void string, void string, void date, void float);
    
/**
 * @param miArticulos
 */
void AsesorarPerfum(Articulos miArticulos);
protected: 
    
void EmpleadoPerfumeria();
private: 
    void Comisiones;float;
};

#endif //_EMPLEADOPERFUMERIA_H