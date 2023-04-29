#include "Cajero.h"
#include "Ticket.h"



Cajero::Cajero(string nombre, string apellido, time_t horario_Laboral, float sueldo) :Empleado(nombre,apellido, horario_Laboral,sueldo) {

}
Cajero::~Cajero() {}

bool Cajero::Cobrar(Ticket miTicket, CarritoCompras ListaPedido) {
	unsigned int A_pagar = 0;
	unsigned int DNI = 0;
	unsigned int PlataRecibida = 0;

	A_pagar = miTicket.getPrecioFinal;
	if (eMetodoPago != TarjetaCredito && eMetodoPago != TarjetaDebito) {
		if (A_pagar == PlataRecibida) {
			cout << "todo ok" << endl;
		}
		else {
			cout << "Falta Plata" << endl;
			return false;
		}


	}
	else {
		get_DNI;
	}
	if{

	}
}


//void Cajero::EntregarPedidoyRecibo(CarritoCompras miCarrito, Ticket miTicket) {}
//
//bool Cajero::EntregatRecibo(Cliente miCliente) {}


