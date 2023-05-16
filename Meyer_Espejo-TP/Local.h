
#ifndef _LOCAL_H
#define _LOCAL_H
#include "Header.h"

class Local {
public:
    Local(string Nombre, string Direccion, string Contacto);
    ~Local();
  

private:
    string Nombre;
    string Direccion;
    string Contacto;
};

#endif //_LOCAL_H