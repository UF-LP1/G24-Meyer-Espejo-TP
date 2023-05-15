#ifndef _CLEANER_H
#define _CLEANER_H

#include "Empleado.h"
#include "Header.h"

class Cleaner : public Empleado {
public:

    Cleaner(string nombre, string apellido, time_t horario_Laboral, float sueldo);
    ~Cleaner();

    /*bool LimpiarOrdenar();*/

};

#endif //_CLEANER_H