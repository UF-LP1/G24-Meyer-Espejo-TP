#include "Cajero.h"




Cajero::Cajero(string nombre, string apellido, time_t horario_Laboral, float sueldo) :Empleado(nombre,apellido, horario_Laboral,sueldo) {

}
Cajero::~Cajero() {}

bool Cajero::Cobrar(Ticket miTicket) {

}


//void Cajero::EntregarPedidoyRecibo(CarritoCompras miCarrito, Ticket miTicket) {}
//
//bool Cajero::EntregatRecibo(Cliente miCliente) {}


