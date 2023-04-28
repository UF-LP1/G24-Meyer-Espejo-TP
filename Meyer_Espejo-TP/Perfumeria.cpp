#include "Perfumeria.h"
#include "eArticuloPerf.h"

Perfumeria::Perfumeria() :Articulos(float Precio, unsigned int Stock) {

}
Perfumeria::~Perfumeria() {

}
enum Perfumeria::get_ArticuloPerf( eArticuloPerf ArtPerf) {
    return this->eArticuloPerf;
}


void Perfumeria::set_ArticuloPerf(eArticuloPerf artPerf) {
    this->ArtPerf = artPerf;
}
