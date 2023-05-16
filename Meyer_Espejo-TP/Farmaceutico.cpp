

#include "Farmaceutico.h"


Farmaceutico::Farmaceutico(string nombre, string apellido, float sueldo,unsigned int nroMatricula) :Empleado(nombre, apellido, sueldo) {
	this->NroMatricula = nroMatricula;
}
Farmaceutico::~Farmaceutico() {}


//bool Farmaceutico::VerificarReceta(Cliente miCliente) {
//	if()
//}
//
//void Farmaceutico::VentaMedicamentos(Cliente miCliente,Farmacia miFarmacia) {
//	if (miFarmacia.get_ObligReceta() == true) //es con receta
//	{
//		bool Verificacion = VerificarReceta(miCliente);
//	}
//	else //no es con receta (venta libre) 
//		//lo sumo al carrito
//}
//
//void Farmaceutico::RecomendacionVentaLibre(Articulos miArticulos) {
//
//}
//
//void Farmaceutico::AconsejaDosificacion(Articulos miArticulos) {
//
//}

unsigned int Farmaceutico::get_NroMatricula() {
    return this->NroMatricula;
}

