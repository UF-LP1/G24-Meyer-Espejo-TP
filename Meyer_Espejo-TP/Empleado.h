#include "Header.h"
#include "Cliente.h"
#include "CarritoCompras.h"
#include "Receta.h"
#include "eObrasSocialesVarias.h"
#ifndef _EMPLEADO_H
#define _EMPLEADO_H


class Empleado {
public:

    Empleado(string nombre, string apellido, float sueldo);
    ~Empleado();
    void set_Sueldo(float sueldo);
    float get_Sueldo();
   // unsigned int LlamarPorTicket(Cliente miCliente);
    //void ExpenderSolictado(Cliente miCliente);

    float ActualizarPrecio(Receta miReceta, CarritoCompras miCarrito);
    void FacturaryGeneraTicket(CarritoCompras miCarrito, Cliente& miCliente);
    float CalculaDescuento(Receta miReceta);

protected:
    string Nombre;
    string Apellido;
    float Sueldo;
};

#endif //_EMPLEADO_H