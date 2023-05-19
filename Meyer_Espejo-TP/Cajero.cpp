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
Factura Cajero:: Cobrar(Cliente miCliente,Local miLocal)
{
	float A_pagar;
	float PrecioEfectivo;
	
	A_pagar = miCliente.get_Ticket().get_PrecioFinal();
		
	eMetodoPago PagarCon = miCliente.get_miMetodoPago();

	//verificar con el metodo SaldoSuficiente que pueda pagar
	if (SaldoSuficiente(miCliente, A_pagar) == true)
	{
		if (PagarCon == 0) //seria Efectivo
		{
			//aplicamos en caja el 10% de descuento por pagar en efectivo
			PrecioEfectivo = A_pagar * 0.1;
			Factura FacturacompraEf(PrecioEfectivo, miCliente.get_Nombre(), miCliente.get_Apellido(), miCliente.get_formato(), miCliente.get_Carrito().get_lista());
				
			EntregarFactura(PrecioEfectivo, miCliente,miLocal);
				
			return FacturacompraEf;
		}
		else //pagar con tarjeta o MP (no tiene descuento)
		{
				
			Factura Facturacompra(A_pagar, miCliente.get_Nombre(), miCliente.get_Apellido(), miCliente.get_formato(), miCliente.get_Carrito().get_lista());
			EntregarFactura(A_pagar, miCliente,miLocal);
				
			return Facturacompra;
		}
	}
	else //no se pudo finalizar la compra
	{
		throw new exception("No se pudo finalizar compra");
		
			//no devuelvo factura porque no se puedo finalizar la compra
		
	}
}

Factura Cajero::EntregarFactura(float precio, Cliente& miCliente, Local& miLocal) {

	Factura FacturaActualizada(precio, miCliente.get_Nombre(), miCliente.get_Apellido(), miCliente.get_formato(), miCliente.get_Carrito().get_lista());
	miCliente.set_Factura(FacturaActualizada);
	miLocal.AgregarFactura(FacturaActualizada);
	return FacturaActualizada;
}




