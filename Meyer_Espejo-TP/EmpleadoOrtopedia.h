#ifndef _EMPLEADOORTOPEDIA_H
#define _EMPLEADOORTOPEDIA_H

#include "Empleado.h"
#include "Header.h"


class EmpleadoOrtopedia : public Empleado {
public:

    EmpleadoOrtopedia(string nombre, string apellido, float sueldo);
    ~EmpleadoOrtopedia();

   /* void AsesorarArtOrtop(Articulos miArticulos);

    void Empacar(Articulos miArticulos);*/


};

#endif //_EMPLEADOORTOPEDIA_H