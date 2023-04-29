

#ifndef _CAJERO_H
#define _CAJERO_H
#include "Libreria.h"
#include "Empleado.h"
#include "Ticket.h"
#include "CarritoCompras.h"
#include "Cliente.h"

class Cajero : public Empleado {
public:

    Cajero();
    ~Cajero();

    bool Cobrar(Ticket miTicket);
    /*void EntregarPedidoyRecibo(CarritoCompras miCarrito, Ticket miTicket);
    bool EntregatRecibo(Cliente miCliente);*/

};

#endif //_CAJERO_H