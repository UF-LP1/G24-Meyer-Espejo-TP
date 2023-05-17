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
			EntregarFactura(PrecioEfectivo, miCliente);
			return ticketcompraEf;
		}
		else //pagar con tarjeta o MP (no tiene descuento)
		{
			Ticket ticketcompra(true,miTicket.get_PrecioFinal(), miCliente.get_DNI(), miCliente.get_miMetodoPago(), miCliente.get_CUIT());
			EntregarFactura(miTicket.get_PrecioFinal(), miCliente);
			return ticketcompra;
		}
	}
	else //no se pudo finalizar la compra
	{
		Ticket NoValido(false,miTicket.get_PrecioFinal(), miCliente.get_DNI(), miCliente.get_miMetodoPago(), miCliente.get_CUIT());
		//no devuelvo factura porque no se puedo finalizar la compra
		return NoValido;
	}
}

Factura Cajero::EntregarFactura(float precio, Cliente& miCliente) {

	Factura FacturaActualizada(precio, miCliente.get_Nombre(), miCliente.get_Apellido(), miCliente.get_formato(), miCliente.get_Carrito().get_lista());
	miCliente.set_Factura(FacturaActualizada);
}




