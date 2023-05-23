#include "Perfumeria.h"
#include "eArticuloPerf.h"
#include "Articulos.h"

Perfumeria::Perfumeria(float precio, unsigned int stock, unsigned int codigo, eNecesidad tipoarticulo, string size, enum eArticuloPerf artPerf) :Articulos(precio,stock,codigo,tipoarticulo) {
	
	this->Size = size; 
	this->ArtPerf = artPerf;
}
Perfumeria::~Perfumeria() {}

eArticuloPerf Perfumeria::get_ArticuloPerf( ) {
	return this->ArtPerf;
}


float Perfumeria:: get_Precio() {
	return this->Precio;
}

unsigned int Perfumeria::get_Stock()
{
	return this->Stock;
}
unsigned int Perfumeria::get_Codigo()
{
	return this->Codigo;
}
string Perfumeria:: get_Size() {
	return this->Size;
}
