#ifndef _CLEANER_H
#define _CLEANER_H

#include "Empleado.h"


class Cleaner : public Empleado {
public:

    Cleaner();
    ~Cleaner();

    bool LimpiarOrdenar();

};

#endif //_CLEANER_H