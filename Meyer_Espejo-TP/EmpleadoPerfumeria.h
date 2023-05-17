
#ifndef _EMPLEADOPERFUMERIA_H
#define _EMPLEADOPERFUMERIA_H

#include "Empleado.h"
#include "Header.h"

class EmpleadoPerfumeria : public Empleado {
public:

    EmpleadoPerfumeria(string nombre, string apellido, float sueldo);
    ~EmpleadoPerfumeria();
    void revisionperf(Cliente MiCliente);
    /*void AsesorarPerfum(Articulos miArticulos);*/

};

#endif //_EMPLEADOPERFUMERIA_H