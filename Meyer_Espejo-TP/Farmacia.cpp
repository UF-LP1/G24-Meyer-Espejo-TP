#include "Farmacia.h"
#include "eFarmacia.h"

Farmacia::Farmacia(float precio, unsigned int stock, unsigned int codigo, enum eFarmacia artFarm):Articulos(precio, stock,codigo) {
	
	this->ArtFarm = artFarm;
}
Farmacia::~Farmacia() {}

//enum Farmacia::get_ArtFarm(eFarmacia ArtFarm) {
//    return this->ArtFarm;
//}
//
//void Farmacia::setArtFarm(eFarmacia artfarm) {
//    this->ArtFarm = artFarm;
//}


