

#ifndef _CAJERO_H
#define _CAJERO_H

#include "Empleado.h"


class Cajero : public Empleado {
public:

    Cajero();
    ~Cajero();

    float CalcMontoTotal(Perfumeria miPerfumeria, Golosina miGolosina, Ortopedia miOrtopedia, Farmacia miFarmacia);
    bool Cobrar(Ticket miTicket);
    void EntregarPedidoyRecibo(CarritoCompras miCarrito, Ticket miTicket);
    bool EntregatRecibo(Cliente miCliente);

};

#endif //_CAJERO_H