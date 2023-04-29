#include "Farmacia.h"
#include "eFarmacia.h"

Farmacia::Farmacia(float Precio, unsigned int Stock, enum eFarmacia ArtFarm):Articulos(Precio, Stock) {
	this->Precio = Precio;
	this->Stock = Stock;
	this->ArtFarm = ArtFarm;
}
Farmacia::~Farmacia() {}

//enum Farmacia::get_ArtFarm(eFarmacia ArtFarm) {
//    return this->ArtFarm;
//}
//
//void Farmacia::setArtFarm(eFarmacia artfarm) {
//    this->ArtFarm = artFarm;
//}


