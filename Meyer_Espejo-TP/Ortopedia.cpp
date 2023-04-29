#include "Ortopedia.h"
#include "eArticuloOrt.h"

Ortopedia::Ortopedia(float precio, unsigned int stock, unsigned int codigo, enum eArticuloOrt artOrtop):Articulos(precio, stock, codigo) {
	this->ArtOrtop = artOrtop;
}

Ortopedia::~Ortopedia() {}

//enum Ortopedia::get_ArticuloOrt() {
//    return this->ArtOrtop;
//}
//
//enum Ortopedia::setArtOrt(enum eArticuloOrt artOrtop) {
//    this->ArtOrtp = artOrtop;
//}
