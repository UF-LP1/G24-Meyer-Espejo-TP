
#include "Local.h"



Local::Local(string Nombre, string Direccion, string Contacto, bool _limpio, vector<Articulos*>ListaArticulosLocal) {
	this->Nombre = Nombre;
	this->Direccion = Direccion;
	this->Contacto = Contacto;
	this->limpio = _limpio;
	this->ListaArticulosLocal = ListaArticulosLocal;
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
void Local:: AgregarFactura(Factura NuevaFactura)
{
	this->RegistroFactura.push_back(NuevaFactura);
}

void Local::set_colaClientes(queue<Cliente> nuevaCola) {
	this->cola_Clientes = nuevaCola;
}   



vector<Articulos*>Local::get_listaarticulos() {
	return this->ListaArticulosLocal;
}
//void set_ArticulosLocal(vector<Articulos*>lista) {
//	this->ListaArticulosLocal = lista;
//}