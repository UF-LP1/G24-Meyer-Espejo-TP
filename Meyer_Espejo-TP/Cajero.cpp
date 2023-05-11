#include "Cajero.h"




Cajero::Cajero(string nombre, string apellido, time_t horario_Laboral, float sueldo) :Empleado(nombre,apellido, horario_Laboral,sueldo) {

}
Cajero::~Cajero() {}  

Ticket Cajero:: Cobrar(Ticket miTicket,Cliente miCliente) {
	float A_pagar;
	float PrecioEfectivo;
	//unsigned int PlataRecibida = 0;

	A_pagar = miTicket.get_PrecioFinal();
	eMetodoPago PagarCon = miCliente.get_miMetodoPago();

	if (PagarCon == 0) //seria Efectivo
	{
		//aplicamos en caja el 10% de descuento por pagar en efectivo
		PrecioEfectivo = A_pagar * 0.1;
	}
	/*if (eMetodoPago != TarjetaCredito && eMetodoPago != TarjetaDebito) {
		if (A_pagar == PlataRecibida) {
			cout << "todo ok" << endl;
		}
		else {
			cout << "Falta Plata" << endl;
			return false;
		}


	}*/
	
}


//void Cajero::EntregarPedidoyRecibo(CarritoCompras miCarrito, Ticket miTicket) {}
//
//bool Cajero::EntregatRecibo(Cliente miCliente) {}


