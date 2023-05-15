#include "Ticket.h"

Ticket::Ticket(bool aprobada, string DNI,enum eMetodoPago MetodoPago, string CUIT):DNI(DNI),CUIT(CUIT) {
    this->PrecioFinal=0;
    this->MetodoPago = MetodoPago;
    this->Aprobada = aprobada;
}
Ticket::~Ticket() {

}
void Ticket::set_PrecioFinal(float aux) {
    
    this->PrecioFinal = aux;
}

float Ticket::get_PrecioFinal(){
    return this->PrecioFinal;
}

bool Ticket::get_Aprobada() {
    return this-> Aprobada;
}