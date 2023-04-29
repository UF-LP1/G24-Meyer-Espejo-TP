
#ifndef _EMPLEADOPERFUMERIA_H
#define _EMPLEADOPERFUMERIA_H

#include "Empleado.h"


class EmpleadoPerfumeria : public Empleado {
public:

    EmpleadoPerfumeria(string Nombre, string Apellido,time_t Horario_Laboral, float Sueldo);
    ~EmpleadoPerfumeria();

    /*void AsesorarPerfum(Articulos miArticulos);*/

};

#endif //_EMPLEADOPERFUMERIA_H