
#include "eMetodoPago.h"
#include "Libreria.h"
#include "CarritoCompras.h"
#include "Empleado.h"


#ifndef _TICKET_H
#define _TICKET_H

class Ticket {
public:


    Ticket(string DNI,enum eMetodoPago MetodoPago, string CUIT);
    ~Ticket();
    float set_PrecioFinal(CarritoCompras miCarrito, Empleado miEmpleado);
    float get_PrecioFinal();

private:
    float PrecioFinal; //equivale a montototal (atr.Carrito) pero ya con el descuento aplicado
    const string DNI;
    eMetodoPago MetodoPago;
    const string CUIT;
};

#endif //_TICKET_H