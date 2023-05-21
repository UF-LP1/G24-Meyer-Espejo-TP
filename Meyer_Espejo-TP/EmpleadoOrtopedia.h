#ifndef _EMPLEADOORTOPEDIA_H
#define _EMPLEADOORTOPEDIA_H

#include "Empleado.h"
#include "Header.h"
#include "Vendedor.h"


class EmpleadoOrtopedia : public Vendedor {
public:

    EmpleadoOrtopedia(string nombre, string apellido, float sueldo);
    ~EmpleadoOrtopedia();
   void  revisionort(Cliente MiCliente, vector<Articulos*>ListaArticuloslocal);
   
};

#endif //_EMPLEADOORTOPEDIA_H