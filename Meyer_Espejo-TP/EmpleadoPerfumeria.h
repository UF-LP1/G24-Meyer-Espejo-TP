
#ifndef _EMPLEADOPERFUMERIA_H
#define _EMPLEADOPERFUMERIA_H

#include "Empleado.h"
#include "Header.h"
#include "Vendedor.h"
#include "Perfumeria.h"

class EmpleadoPerfumeria : public Vendedor {
public:

    EmpleadoPerfumeria(string nombre, string apellido, float sueldo);
    ~EmpleadoPerfumeria();
    bool revisionperf(Cliente MiCliente);
    

};

#endif //_EMPLEADOPERFUMERIA_H