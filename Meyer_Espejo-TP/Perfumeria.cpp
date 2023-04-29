#include "Perfumeria.h"
#include "eArticuloPerf.h"
#include "Articulos.h"

Perfumeria::Perfumeria(float precio, unsigned int stock, unsigned int codigo, string size, enum eArticuloPerf artPerf) :Articulos(precio,stock,codigo) {
	
	this->Size = size; 
	this->ArtPerf = artPerf;
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
