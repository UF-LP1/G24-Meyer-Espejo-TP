
#include "Local.h"

Local::Local(string Nombre, string Direccion, time_t HorarioSemana, time_t HorarioFinDeSemana, string Contacto) {
	this->Nombre = Nombre;
	this->Direccion = Direccion;
	this->HorarioSemana = HorarioSemana;
	this->HorarioFinDeSemana = HorarioFinDeSemana;
	this->Contacto = Contacto;
}
Local::~Local() {}

////getter
//time_t Local::get_HorarioFinDeSemana() {
//	return this->HorarioFinDeSemana;
//}
//void Local::set_Contacto(string contacto) {
//	this->Contacto = contacto;
//}

