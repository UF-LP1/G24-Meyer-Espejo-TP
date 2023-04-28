#include "Libreria.h"

#ifndef _EMPLEADO_H
#define _EMPLEADO_H


class Empleado {
public:

    Empleado(string Nombre, string Apellido, date Horario_Laboral, float Sueldo);
    ~Empleado();
    void set_Sueldo(float sueldo);
    date get_HorarioLaboral();
    float get_Sueldo();
    unsigned int LlamarPorTicket(Cliente miCliente);
    void ExpenderSolictado(Cliente miCliente);
    float AplicarDescuento(miCliente.Cliente);
    float FacturaryGeneraTicket();
    void set_HorarioLaboral(date horarioLaboral);

protected:
    string Nombre;
    string Apellido;
    date Horariolaboral;
    float Sueldo;


};

#endif //_EMPLEADO_H