#include "Ticket.h"

Ticket::Ticket(bool aprobada,string DNI,enum eMetodoPago MetodoPago, string CUIT) {
    this->PrecioFinal=0;
    this->Aprobada = aprobada;
    this->MetodoPago = MetodoPago;
    this->Aprobada = false;
    this->DNI = DNI;
    this->CUIT = CUIT;
}
Ticket::Ticket(bool aprobada, float preciofinal, string DNI, enum eMetodoPago MetodoPago, string CUIT) {
    this->PrecioFinal = preciofinal;
    this->Aprobada = aprobada;
    this->MetodoPago = MetodoPago;
    this->Aprobada = false;
    this->DNI = DNI;
    this->CUIT = CUIT;
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

string Ticket:: get_DNI() {
    return this->DNI;
}