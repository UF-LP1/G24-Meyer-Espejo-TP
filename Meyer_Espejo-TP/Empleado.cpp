#include "Empleado.h"
#include "Cliente.h"
#include "CarritoCompras.h"
#include "Ticket.h"
#include "Receta.h"

//constructor
Empleado::Empleado(string nombre, string apellido, float sueldo) {
    this->Nombre = nombre;
    this->Apellido = apellido;
    this->Sueldo = sueldo;
   
}

//destructor
Empleado::~Empleado() {

}
void Empleado::FacturaryGeneraTicket(CarritoCompras miCarrito,Cliente &miCliente) {
    float preciofinal = ActualizarPrecio(miCliente.get_Receta(),miCarrito);
    Ticket miTicket(false,preciofinal, miCliente.get_DNI(), miCliente.get_miMetodoPago(), miCliente.get_CUIT());
    miCliente.set_Ticket(miTicket); 
}

float CalculaDescuento(Receta miReceta) {
    
    float discount=0; //si es otra no tiene descuento, por eso inicializo en 0

    if (miReceta.get_obrasocial() == OSDE) 
        discount = 0.3;
    if (miReceta.get_obrasocial() == SwissMedical)
        discount = 0.2;
    if (miReceta.get_obrasocial() == GALENO || miReceta.get_obrasocial() == MEDICUS)
        discount = 0.1;
    
    return discount;
}

float Empleado::ActualizarPrecio(Receta miReceta,CarritoCompras miCarrito)
{
    float aux = 0;
    float descuentoAaplicar;
    descuentoAaplicar = CalculaDescuento(miReceta);
    aux = miCarrito.get_MontoTotal() - descuentoAaplicar;
    return aux;
}

//unsigned int Empleado::LlamarPorTicket(Cliente miCliente) {
//
//}
//
//
//void Empleado::ExpenderSolictado(Cliente miCliente) {
//
//}
//
//
//
//
//

//setters
   
void Empleado::set_Sueldo(float nuevoSueldo) {
    this->Sueldo = nuevoSueldo;
}

//getters

float Empleado::get_Sueldo() {
    return this->Sueldo;
}