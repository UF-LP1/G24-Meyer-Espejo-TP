
#include "Libreria.h"
#include "Ticket.h"


Ticket::Ticket(string DNI,enum eMetodoPago MetodoPago, string CUIT):DNI(DNI),CUIT(CUIT) {
    this->PrecioFinal =0;
    this->MetodoPago = MetodoPago;
}
Ticket::~Ticket() {

}
float Ticket::set_PrecioFinal(CarritoCompras miCarrito, Empleado miEmpleado) {
    float aux = 0;
    float descuentoAaplicar;
    descuentoAaplicar= miEmpleado.CalcularDescuento(Receta miReceta, enum eObrasSocialesVarias);
    aux = miCarrito.get_MontoTotal() - descuentoAaplicar;

   this->PrecioFinal = aux;
}

float Ticket::get_PrecioFinal(){
    return this->PrecioFinal;
}

