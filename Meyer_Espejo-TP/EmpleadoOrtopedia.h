#ifndef _EMPLEADOORTOPEDIA_H
#define _EMPLEADOORTOPEDIA_H

#include "Empleado.h"
#include "Articulos.h"


class EmpleadoOrtopedia : public Empleado {
public:

    EmpleadoOrtopedia(string nombre, string apellido, time_t horario_Laboral, float sueldo);
    ~EmpleadoOrtopedia();

   /* void AsesorarArtOrtop(Articulos miArticulos);

    void Empacar(Articulos miArticulos);*/


};

#endif //_EMPLEADOORTOPEDIA_H