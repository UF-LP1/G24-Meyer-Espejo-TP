
#ifndef _LOCAL_H
#define _LOCAL_H
#include "Libreria.h"
class Local {
public:
    Local(string Nombre, string Direccion, date HorarioSemana, date HorarioFinDeSemana, string Contacto);
    ~Local();
    void set_Contacto(string contacto);
    date get_HorarioFinDeSemana();

private:
    string Nombre;
    string Direccion;
    date HorarioSemana;
    date HorarioFinDeSemana;
    string Contacto;
};

#endif //_LOCAL_H