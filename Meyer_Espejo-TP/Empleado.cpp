#include "Empleado.h"
#include "Libreria.h"
#include "Cliente.h"

//constructor
Empleado::Empleado(string Nombre, string Apellido, float Sueldo,time_t Horariolaboral) {
    this->Nombre = Nombre;
    this->Apellido = Apellido;
    this->Sueldo = Sueldo;
    this->Horariolaboral = Horariolaboral;
}

//destructor
Empleado::~Empleado() {

}

unsigned int Empleado::LlamarPorTicket(Cliente miCliente) {

}


void Empleado::ExpenderSolictado(Cliente miCliente) {

}

float Empleado::AplicarDescuento(Cliente miCliente) {

}


float Empleado::FacturaryGeneraTicket(CarritoCompras miCarrito) {
    float discount = 0;
    Ticket nuevoticket(float PrecioFinal, string DNI, eMetodoPago MetodoPago, string CUIT, bool Descuento)
        if(get_obrasocial() == ObraSocialesVarias) {

            discount = rand() % 10 + 1;
            discount = discount / 100;



        }
        else
            nuevoticket.PrecioFinal = CalcMontoTotal(ListaArticulos);





}

//setters
    //crear un parametro de NuevaHoraLaboral
void Empleado::set_HorarioLaboral(time_t nuevaHoraLaboral) {}

//crear un parametro de NuevoSueldo
void Empleado::set_Sueldo(float nuevoSueldo) {
    this->Sueldo = nuevoSueldo;
}

//getters
time_t Empleado::get_HorarioLaboral() {}

float Empleado::get_Sueldo() {
    return this->Sueldo;
}