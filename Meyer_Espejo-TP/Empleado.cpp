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
    Ticket miTicket(false, miCliente.get_DNI(), miCliente.get_miMetodoPago(), miCliente.get_CUIL());
    miCliente.set_Ticket(miTicket); 
}

float CalculaDescuento(Receta miReceta) {
    
    float discount;

    if (miReceta.get_obrasocial() == 0) //OSDE
        discount = 0.3;

    
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