#include "Empleado.h"
#include "Libreria.h"
#include "Cliente.h"
#include "CarritoCompras.h"
#include "Ticket.h"

//constructor
Empleado::Empleado(string nombre, string apellido, float sueldo,time_t horariolaboral) {
    this->Nombre = nombre;
    this->Apellido = apellido;
    this->Sueldo = sueldo;
    this->Horariolaboral = horariolaboral;
}

//destructor
Empleado::~Empleado() {

}

/*u*//*nsigned int Empleado::LlamarPorTicket(Cliente miCliente) {

}


void Empleado::ExpenderSolictado(Cliente miCliente) {

}

float Empleado::AplicarDescuento(Cliente miCliente) {

}*/


float Empleado::FacturaryGeneraTicket(CarritoCompras miCarrito) {
    float discount = 0;
    Ticket nuevoticket(float PrecioFinal, string DNI, enum eMetodoPago MetodoPago, string CUIT);
        if(get_obrasocial() == ObraSocialesVarias) {

            discount = rand() % 10 + 1;
            discount = discount / 100;
            nuevoticket.PrecioFinal = CalcMontoTotal(ListaArticulos)*discount;


        }
        else
            nuevoticket.PrecioFinal = CalcMontoTotal(ListaArticulos);





}

////setters
//    //crear un parametro de NuevaHoraLaboral
//void Empleado::set_HorarioLaboral(time_t nuevaHoraLaboral) {}
//
////crear un parametro de NuevoSueldo
//void Empleado::set_Sueldo(float nuevoSueldo) {
//    this->Sueldo = nuevoSueldo;
//}
//
////getters
//time_t Empleado::get_HorarioLaboral() {}
//
//float Empleado::get_Sueldo() {
//    return this->Sueldo;
}