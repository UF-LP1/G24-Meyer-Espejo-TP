
#ifndef _EMPLEADOPERFUMERIA_H
#define _EMPLEADOPERFUMERIA_H

#include "Empleado.h"
#include "Header.h"

class EmpleadoPerfumeria : public Empleado {
public:

    EmpleadoPerfumeria(string nombre, string apellido, time_t horario_Laboral, float sueldo);
    ~EmpleadoPerfumeria();

    /*void AsesorarPerfum(Articulos miArticulos);*/

};

#endif //_EMPLEADOPERFUMERIA_H