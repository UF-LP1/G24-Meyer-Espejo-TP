#ifndef _CLEANER_H
#define _CLEANER_H

#include "Empleado.h"
#include "Header.h"

class Cleaner : public Empleado {
public:

    Cleaner(string nombre, string apellido, float sueldo);
    ~Cleaner();

};

#endif //_CLEANER_H