
#ifndef _LOCAL_H
#define _LOCAL_H
#include "Libreria.h"
class Local {
public:
    Local(string Nombre, string Direccion, time_t HorarioSemana, time_t HorarioFinDeSemana, string Contacto);
    ~Local();
    void set_Contacto(string contacto);
    time_t get_HorarioFinDeSemana();

private:
    string Nombre;
    string Direccion;
    time_t HorarioSemana;
    time_t HorarioFinDeSemana;
    string Contacto;
};

#endif //_LOCAL_H