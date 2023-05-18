
#include "Golosina.h"


Golosina::Golosina(float precio, unsigned int stock, unsigned int codigo, eNecesidad tipoarticulo, enum golosina artGolo):Articulos(precio,stock,codigo,tipoarticulo) {
	this->ArtGolo = artGolo;
}
Golosina::~Golosina() {}

//enum Golosina::getArtgolo(egolosina Artgolo) {
//	return this->Artgolo;
//}
//enum Golosina::setArtgolo(egolosina Artgolo) {
//	this->Artgolo = Artgolo;
//}