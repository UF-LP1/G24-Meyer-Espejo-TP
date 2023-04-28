

#include "Ticket.h"


Ticket::Ticket(float PrecioFinal, string DNI, eMetodoPago MetodoPago, string CUIT, bool Descuento) {
    this->precioFinal = PrecioFinal;
    this->dni = DNI;
    this->metodopago = MetodoPago;
    this->cuit = CUIT;
    this->descuento = Descuento;

}
Ticket::~Ticket() {

}

bool Ticket::AplicarDescuento() {

}
