

#ifndef _CAJERO_H
#define _CAJERO_H
#include "Header.h"
#include "Empleado.h"
#include "Ticket.h"
#include "CarritoCompras.h"
#include "Cliente.h"

class Cajero : public Empleado {
public:

    Cajero(string nombre, string apellido, float sueldo);
    ~Cajero();

    bool SaldoSuficiente(Cliente miCliente,float precio);
    Ticket Cobrar(Ticket miTicket, Cliente miCliente);
    Factura EntregarFactura(CarritoCompras miCarrito, Cliente& miCliente,Ticket miTicket);
    
};

#endif //_CAJERO_H