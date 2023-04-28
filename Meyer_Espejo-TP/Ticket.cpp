
#include "Libreria.h"
#include "Ticket.h"


Ticket::Ticket(float PrecioFinal, string DNI, eMetodoPago MetodoPago, string CUIT, bool Descuento) {
    this->PrecioFinal = PrecioFinal;
    this->DNI = DNI;
    this->MetodoPago = MetodoPago;
    this->CUIT = CUIT;
    this->Descuento = Descuento;

}
Ticket::~Ticket() {

}

bool Ticket::AplicarDescuento() {

}
