
#include "Local.h"
#include <queue>


Local::Local(string Nombre, string Direccion, string Contacto, bool _limpio) {
	this->Nombre = Nombre;
	this->Direccion = Direccion;
	this->Contacto = Contacto;
	this->limpio = _limpio;
}

Local::~Local() {}

bool Local:: get_Limpio()
{
	return this->limpio;
}

void Local:: AgregarTicket(Ticket NuevoTicket) {
	RegistroTickets.push_back(NuevoTicket);
}

void Local::AgregarClienteCola(Cliente nuevoCliente) {
	this->cola_Clientes.push(nuevoCliente);
}

Cliente Local::PrimeroEnCola()
{
	Cliente Primero = this->cola_Clientes.front(); //copio en auxiliar el primero de mi cola, para no perderlo
	cola_Clientes.pop(); //pongo al segundo primero

	return Primero;
}

void Local:: AgregarFactura(Factura NuevaFactura)
{
	this->RegistroFactura.push_back(NuevaFactura);
}

void Local::set_colaClientes(queue<Cliente> nuevaCola) {
	this->cola_Clientes = nuevaCola;
}   


vector<Articulos>Local::get_listaarticulos() {
	return this->ListaArticulosLocal;




}