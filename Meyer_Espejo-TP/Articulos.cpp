


#include "Articulos.h"

Articulos::Articulos (float precio, unsigned int stock,unsigned int codigo) {
	this->Precio =precio;
	this->Stock =stock;
	this->Codigo = codigo;

}

Articulos::~Articulos() {}

//getters

float Articulos::get_Precio() {
	return this->Precio;
}

unsigned int Articulos::get_Stock() {
	return this->Stock;
}

unsigned int Articulos::get_Codigo() {
	return this->Codigo;
}
//setters

void Articulos::set_Precio(float precio) {
	this->Precio = precio;
}

void Articulos::set_Stock(unsigned int stock) {
	this->Stock = stock;
}

