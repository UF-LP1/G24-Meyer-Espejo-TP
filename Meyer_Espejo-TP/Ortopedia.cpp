#include "Ortopedia.h"
#include "eArticuloOrt.h"

Ortopedia::Ortopedia(float Precio,unsigned int Stock, enum eArticuloOrt ArtOrtop) :Articulos(Precio,Stock) {
	this->Precio = Precio;
	this->Stock = Stock;
	this->ArtOrtop = ArtOrtop;
}

Ortopedia::~Ortopedia() {}

//enum Ortopedia::get_ArticuloOrt() {
//    return this->ArtOrtop;
//}
//
//enum Ortopedia::setArtOrt(enum eArticuloOrt artOrtop) {
//    this->ArtOrtp = artOrtop;
//}
