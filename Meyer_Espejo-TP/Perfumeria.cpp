#include "Perfumeria.h"
#include "eArticuloPerf.h"

Perfumeria::Perfumeria(float precio, unsigned int stock, string Size, enum eArticuloPerf ArtPerf) :Articulos(Precio,Stock) {
	this->Precio = Precio;
	this->Stock = Stock;
	this->Size = Size; 
	this->ArtPerf = ArtPerf;
}
Perfumeria::~Perfumeria() {}

//enum Perfumeria::get_ArticuloPerf( ) {
//    return this->eArticuloPerf;
//}
//
//
//void Perfumeria::set_ArticuloPerf(enum eArticuloPerf artPerf) {
//    this->ArtPerf = artPerf;
//}
