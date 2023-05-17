
#include "Local.h"
#include <queue>
Local::Local(string Nombre, string Direccion, string Contacto, queue<Cliente> cola_Clientes) {
	this->Nombre = Nombre;
	this->Direccion = Direccion;
	this->Contacto = Contacto;
	for (int i = 0; i < cola_Clientes.size(); i++)
	{
		this-> cola_Clientes.push();
	}
}


Local::~Local() {}


