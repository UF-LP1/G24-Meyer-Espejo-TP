#include "Empleado.h"
#include "Libreria.h"
#include "Cliente.h"
#include "CarritoCompras.h"
#include "Ticket.h"
#include "Receta.h"

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


float Empleado::CalcularDescuento(Receta miReceta, enum eObrasSocialesVarias) {
    float discount = 0;

        
    if (miReceta.get_obrasocial() == eObraSocialesVarias()) {

        discount = rand() % 10 + 1;
        discount = discount / 100;

        return discount;
    }
    else
        return 0.0; //no lleva descuento
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