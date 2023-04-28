#include "Empleado.h"
#include "Libreria.h"
#include "Cliente.h"

//constructor
Empleado::Empleado(string Nombre, string Apellido, float Sueldo) {
    this->Nombre = Nombre;
    this->Apellido = Apellido;
    this->Sueldo = Sueldo;
    this->HorarioLaboral = "0";
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


float Empleado::FacturaryGeneraTicket() {

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