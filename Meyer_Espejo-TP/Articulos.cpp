


#include "Articulos.h"

Articulos::Articulos(float Precio, unsigned int Stock) {
	this->Precio =0;
	this->Stock =0;
}
Articulos::Articulos(Precio,Stock) {
	this->Precio = 0;
	this->Stock = 0;
}

Articulos::~Articulos() {}

//getters

float Articulos::get_Precio() {
	return this->Precio;
}

unsigned int Articulos::get_Stock() {
	return this->Stock;
}

////setters
//void Articulos::set_Precio(float precio) {
//	this->Precio = precio;
//}
//
//void Articulos::set_Stock(unsigned int stock) {
//	this->Stock = stock;
//}

