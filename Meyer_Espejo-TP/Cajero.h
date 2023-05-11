

#ifndef _CAJERO_H
#define _CAJERO_H
#include "Libreria.h"
#include "Empleado.h"
#include "Ticket.h"
#include "CarritoCompras.h"
#include "Cliente.h"

class Cajero : public Empleado {
public:

    Cajero(string nombre, string apellido, time_t horario_Laboral, float sueldo);
    ~Cajero();

    Ticket Cobrar(Ticket miTicket, Cliente miCliente);
    /*void EntregarPedidoyRecibo(CarritoCompras miCarrito, Ticket miTicket);
    bool EntregatRecibo(Cliente miCliente);*/

};

#endif //_CAJERO_H