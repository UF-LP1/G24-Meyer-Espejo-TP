#include "Libreria.h"
#include "Cliente.h"
#include "CarritoCompras.h"
#ifndef _EMPLEADO_H
#define _EMPLEADO_H


class Empleado {
public:

    Empleado(string nombre, string apellido, float sueldo, time_t horariolaboral);
    ~Empleado();
    /*void set_Sueldo(float sueldo);
    time_t get_HorarioLaboral();
    float get_Sueldo();*/
    /*unsigned int LlamarPorTicket(Cliente miCliente);
    void ExpenderSolictado(Cliente miCliente);
    float AplicarDescuento(Cliente miCliente);*/
    float FacturaryGeneraTicket(CarritoCompras miCarrito);
    /*void set_HorarioLaboral(time_t horarioLaboral);*/

protected:
    string Nombre;
    string Apellido;
    time_t Horariolaboral;
    float Sueldo;


};

#endif //_EMPLEADO_H