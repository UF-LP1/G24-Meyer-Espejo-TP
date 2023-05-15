#include "Cliente.h"
#include "Receta.h"
#include "Ticket.h"

//unsigned int Cliente::SacarTicket(AsistAutomatico miAsistAutomatico) {
//
//}
//
//void Cliente::EntregarSolicitado() {
//
//}
//
//void Cliente::Abonar(Ticket miTicket) {
//
//}

//constructor
Cliente::Cliente(string Nombre, string Apellido, string DNI, unsigned int CodigoSeguridad, unsigned int NroTicket, enum eMetodoPago metodoAutilizar, string mail, float saldoef, double saldomp, double saaldotarj,Ticket ticketauxi, Receta recetaauxi, string CUIL, bool facturafis):CUIL(CUIL) {
	this->Nombre = Nombre;
	this->Apellido = Apellido;
	this->DNI = DNI;
	this->CodigoSeguridad = CodigoSeguridad;
	this->Mail = mail;
	this->NroTicket = NroTicket;
	this->miMetodoPago = metodoAutilizar;
	this->SaldoEf = saldoef;
	this->SaldoMP = saldomp;
	this->SaldoTarj = saaldotarj;
	this->miReceta = recetaauxi;
	this->miTicket = ticketauxi;
	this->FacturaFisica = facturafis;
}

//destructor
Cliente::~Cliente() {
}


////getters
string Cliente::get_Mail()
{
	return this->Mail;
}

string Cliente::get_DNI() {
	return this->DNI;
}

eMetodoPago Cliente:: get_miMetodoPago() {
	return this-> miMetodoPago;
}

unsigned int Cliente::get_CodigoSeguridad() {
	return this->CodigoSeguridad;
}

unsigned int Cliente::get_NroTicket() {
	return this-> NroTicket;
}

float Cliente::get_SaldoEf() {
	return this->SaldoEf;
}

string Cliente::get_CUIL() {
	return this->CUIL;
}
double Cliente::get_SaldoTarj() {
	return this->SaldoTarj;
}
double Cliente::get_SaldoMP() {
	return this->SaldoMP;
}

Receta Cliente::get_Receta() {
	return this-> miReceta;
}

//setters
void Cliente::set_CodigoSeguridad(unsigned int codigoSeguridad) {
	this->CodigoSeguridad = codigoSeguridad;
}

void Cliente::set_Ticket(Ticket aux) {
	this->miTicket = aux;
}

