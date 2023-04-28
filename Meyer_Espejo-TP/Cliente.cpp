#include "Cliente.h"

unsigned int Cliente::SacarTicket(AsistAutomatico miAsistAutomatico) {

}

void Cliente::EntregarSolicitado() {

}

void Cliente::Abonar(Ticket miTicket) {

}

//constructor
Cliente::Cliente(string Nombre, string Apellido, string DNI, unsigned int CodigoSeguridad, unsigned int NroTicket) {
	this->nombre = Nombre;
	this->apellido = Apellido;
	this->dni = DNI;
	this->codigoSeguridad = CodigoSeguridad;
	this->mail = Mail;
	this->nroTicket = NroTicket;

}

//destructor
Cliente::~Cliente() {
}


//getters
string Cliente::get_Mail()
{
	return this->Mail;
}

string Cliente::get_DNI() {
	return this->DNI;
}


unsigned int Cliente::get_CodigoSeguridad() {
	return this->CodigoSeguridad;
}


string Cliente::get_NroTicket() {
	return this->NroTicket;
}

//setters
void Cliente::set_CodigoSeguridad(unsigned int codigoSeguridad) {
	this->CodigoSeguridad = codigoSeguridad;
}