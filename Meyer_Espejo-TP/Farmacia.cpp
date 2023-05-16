#include "Farmacia.h"
#include "eFarmacia.h"

Farmacia::Farmacia(float precio, unsigned int stock, unsigned int codigo, enum eFarmacia artFarm, bool receta) :Articulos(precio, stock,codigo) {
	
	this->ArtFarm = artFarm;
	this->ConReceta = receta;
}
Farmacia::~Farmacia() {}

eFarmacia Farmacia::get_ArtFarm() {
    return this->ArtFarm;
}

bool Farmacia::get_ObligReceta() {
	return this->ConReceta;
}



