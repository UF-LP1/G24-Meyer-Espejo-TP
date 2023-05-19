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



