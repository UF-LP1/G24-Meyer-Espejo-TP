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



//setters
   
void Empleado::set_Sueldo(float nuevoSueldo) {
    this->Sueldo = nuevoSueldo;
}

//getters

float Empleado::get_Sueldo() {
    return this->Sueldo;
}