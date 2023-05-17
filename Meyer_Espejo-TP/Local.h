
#ifndef _LOCAL_H
#define _LOCAL_H
#include "Header.h"
#include <queue>
#include "Cliente.h"



class Local {
public:
    Local(string Nombre, string Direccion, string Contacto, queue<Cliente> cola_Clientes);
    ~Local();
  

private:
    string Nombre;
    string Direccion;
    string Contacto;
    queue<Cliente> cola_Clientes;

};

#endif //_LOCAL_H