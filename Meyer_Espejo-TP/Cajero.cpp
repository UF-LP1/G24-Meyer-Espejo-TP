#include "Cajero.h"
#include "Ticket.h"

Cajero::Cajero(string nombre, string apellido, float sueldo):Empleado(nombre,apellido,sueldo) {

}
Cajero::~Cajero() {}  

bool Cajero:: SaldoSuficiente(Cliente miCliente, float precio)
{

	eMetodoPago metodoMiCliente = miCliente.get_miMetodoPago();

	if (metodoMiCliente == 0)//paga en efectivo
	{
		float saldoEfdisponible = miCliente.get_SaldoEf();
		if (precio > saldoEfdisponible)
			return true;
		else
			return false;
	}

	if (metodoMiCliente == 3)//paga en MP
	{
		float saldoMPdisponible = miCliente.get_SaldoMP();
		if (precio > saldoMPdisponible)
			return true;
		else
			return false;
	}

	else { //paga en tarjeta
		float saldoTarjdisponible = miCliente.get_SaldoTarj();
		if (precio > saldoTarjdisponible)
			return true;
		else
			return false;
	}
}

Ticket Cajero:: Cobrar(Ticket miTicket,Cliente miCliente)
{
	float A_pagar;
	float PrecioEfectivo;
	
	A_pagar = miTicket.get_PrecioFinal();
	eMetodoPago PagarCon = miCliente.get_miMetodoPago();

	//verificar con el metodo SaldoSuficiente que pueda pagar
	if (SaldoSuficiente(miCliente, miTicket.get_PrecioFinal()) == true)
	{
		if (PagarCon == 0) //seria Efectivo
		{
			//aplicamos en caja el 10% de descuento por pagar en efectivo
			PrecioEfectivo = A_pagar * 0.1;
			Ticket ticketcompraEf (true, PrecioEfectivo, miCliente.get_DNI(), miCliente.get_miMetodoPago(), miCliente.get_CUIT());
			return ticketcompraEf;
		}
		else //pagar con tarjeta o MP (no tiene descuento)
		{
			Ticket ticketcompra(true,miTicket.get_PrecioFinal(), miCliente.get_DNI(), miCliente.get_miMetodoPago(), miCliente.get_CUIT());
			return ticketcompra;
		}
	}
	else //no se pudo finalizar la compra
	{
		Ticket NoValido(false,miTicket.get_PrecioFinal(), miCliente.get_DNI(), miCliente.get_miMetodoPago(), miCliente.get_CUIT());
		return NoValido;
	}
}

Factura Cajero::EntregarFactura(CarritoCompras miCarrito, Cliente& miCliente,Ticket miTicket) {

	bool Formato = miCliente.get_formato();

	if (Formato == true)//formato fisico
	{
		Factura miFactura(miTicket.get_PrecioFinal(),miCliente.get_Nombre(),miCliente.get_Apellido(),true,miCarrito.get_lista());
		miCliente.set_Factura(miFactura);
	}
	else //formato digital
	{
		string mailCliente = miCliente.get_Mail();
		Factura miFactura(miTicket.get_PrecioFinal(), miCliente.get_Nombre(), miCliente.get_Apellido(), false, miCarrito.get_lista());
		miCliente.set_Factura(miFactura);
		//mandarle al mail la factura
	}

}




