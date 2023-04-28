
#include "Local.h"

Local::Local(string Nombre, string Direccion, date HorarioSemana, date HorarioFinDeSemana, string Contacto) {
	this->nombre = Nombre;
	this->direccion = Direccion;
	this->horarioSemana = HorarioSemana;
	this->horarioFinDeSemana = HorarioFinDeSemana;
	this->contacto = Contacto;
}
Local::~Local() {}

//getter
date Local::get_HorarioFinDeSemana() {
	return this->HorarioFinDeSemana;
}
void Local::set_Contacto(string contacto) {
	this->Contacto = contacto;
}

