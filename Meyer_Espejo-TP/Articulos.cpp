


#include "Articulos.h"



Articulos::Articulos (float precio, unsigned int stock,unsigned int Codigo, eNecesidad tipoarticulo,enum eArticulosLocal _articuloslocal) {
	this->Precio =precio;
	this->Stock =stock;
	this->Codigo = Codigo;
	this->TipoArticulo = tipoarticulo;
	this->articuloslocal = _articuloslocal;
}

Articulos::~Articulos() {
}

//getters

float Articulos::get_Precio() {
	return this->Precio;
}

unsigned int Articulos::get_Stock() {
	return this->Stock;
}

unsigned int Articulos::get_Codigo() {
	return this-> Codigo; 
}

eNecesidad Articulos:: get_TipoArticulo() {
	return this->TipoArticulo;
}

//setters

void Articulos::set_Precio(float precio) {
	this->Precio = precio;
}

void Articulos::set_Stock(unsigned int stock) {
	this->Stock = stock;
}

eArticulosLocal Articulos:: get_articuloslocal() {
	if(articuloslocal>=0 && articuloslocal<15) //solo imprimo esos porque son los Articulos del Local
		this->articuloslocal;
}