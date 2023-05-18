

#ifndef _CAJERO_H
#define _CAJERO_H
#include "Header.h"
#include "Empleado.h"
#include "Ticket.h"
#include "CarritoCompras.h"
#include "Cliente.h"
#include "Local.h"

class Cajero : public Empleado {
public:

    Cajero(string nombre, string apellido, float sueldo);
    ~Cajero();
    bool SaldoSuficiente(Cliente miCliente,float precio);
    Ticket Cobrar(Ticket miTicket, Cliente miCliente, Local miLocal);
    Factura EntregarFactura(float precio, Cliente& miCliente,Local& miLocal);
    
};

#endif //_CAJERO_H