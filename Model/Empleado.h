/**
 * Project Untitled
 */


#ifndef _EMPLEADO_H
#define _EMPLEADO_H

#include "Cajero.h"


class Empleado: public Cajero {
public: 
    
void Operation1();
    
void Operation2();
    
/**
 * @param string
 * @param string
 * @param date
 * @param float
 */
void Empleado(void string, void string, void date, void float);
    
/**
 * @param miCliente
 */
unsigned int LlamarPorTicket(Cliente miCliente);
    
/**
 * @param miCliente
 */
void ExpenderSolictado(Cliente miCliente);
    
/**
 * @param miCliente.Cliente
 */
float AplicarDescuento(void miCliente.Cliente);
    
float FacturaryGeneraTicket();
    
/**
 * @param date HorarioLaboral
 */
date setHorarioLaboral(void date HorarioLaboral);
    
/**
 * @param float Sueldo
 */
float set Sueldo(void float Sueldo);
    
date getHorarioLaboral();
    
float getSueldo();
protected: 
    string Nombre;
    string Apellido;
    date Horariolaboral;
    float Sueldo;
    
void Empleado();
};

#endif //_EMPLEADO_H