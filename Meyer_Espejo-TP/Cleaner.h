#ifndef _CLEANER_H
#define _CLEANER_H

#include "Empleado.h"
#include "Header.h"
#include "Local.h"

class Cleaner : public Empleado {
public:

    Cleaner(string nombre, string apellido, float sueldo);
    ~Cleaner();
    bool LimpiaryOrdenar(Local miLocal);
};

#endif //_CLEANER_H