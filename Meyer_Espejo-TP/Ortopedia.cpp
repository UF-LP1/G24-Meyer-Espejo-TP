#include "Ortopedia.h"
#include "eArticuloOrt.h"

Ortopedia::Ortopedia(float precio, unsigned int stock, unsigned int codigo, eNecesidad tipoarticulo, enum eArticuloOrt artOrtop):Articulos(precio, stock, codigo,tipoarticulo) {
	this->ArtOrtop = artOrtop;
}

Ortopedia::~Ortopedia() {}

eArticuloOrt Ortopedia::get_ArticuloOrt() {
    return this->ArtOrtop;
}

float Ortopedia::get_Precio() {
	return this->Precio;
}

unsigned int Ortopedia::get_Stock()
{
	return this->Stock;
}
unsigned int Ortopedia::get_Codigo()
{
	return this->Codigo;
}
