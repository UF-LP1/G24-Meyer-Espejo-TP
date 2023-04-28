#include "Farmacia.h"
#include "eFarmacia.h"


Farmacia::Farmacia() :Articulos(float Precio, unsigned int Stock) {

}
Farmacia::~Farmacia() {}

enum Farmacia::get_ArtFarm(eFarmacia ArtFarm) {
    return this->ArtFarm;
}

void Farmacia::setArtFarm(eFarmacia artfarm) {
    this->ArtFarm = artFarm;
}


