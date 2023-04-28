/**
 * Project Untitled
 */


#ifndef _CLEANER_H
#define _CLEANER_H

#include "Empleado.h"


class Cleaner: public Empleado {
public: 
    
/**
 * @param string
 * @param string
 * @param date
 * @param float
 */
void Cleaner(void string, void string, void date, void float);
    
bool LimpiarOrdenar();
protected: 
    
void Cleaner();
};

#endif //_CLEANER_H