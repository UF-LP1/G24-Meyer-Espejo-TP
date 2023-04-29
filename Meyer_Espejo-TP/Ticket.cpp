
#include "Libreria.h"
#include "Ticket.h"


Ticket::Ticket(float PrecioFinal, string DNI,enum eMetodoPago MetodoPago, string CUIT):DNI(DNI),CUIT(CUIT) {
    this->PrecioFinal = PrecioFinal;
    this->MetodoPago = MetodoPago;
}
Ticket::~Ticket() {

}

//bool Ticket::AplicarDescuento() {
//
//}
