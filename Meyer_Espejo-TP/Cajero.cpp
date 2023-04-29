#include "Cajero.h"




Cajero::Cajero(string Nombre,string Apellido,float Sueldo, time_t Horariolaboral) :Empleado(Nombre,Apellido,Sueldo,Horariolaboral) {

}
Cajero::~Cajero() {}

bool Cajero::Cobrar(Ticket miTicket) {

}


//void Cajero::EntregarPedidoyRecibo(CarritoCompras miCarrito, Ticket miTicket) {}
//
//bool Cajero::EntregatRecibo(Cliente miCliente) {}


