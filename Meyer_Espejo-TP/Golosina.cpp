
#include "Golosina.h"
#include "egolosina.h"

Golosina::Golosina() :Articulos(float Precio, unsigned int Stock) {

}
Golosina::~Golosina() {}

enum Golosina::getArtgolo(egolosina Artgolo) {
	return this->Artgolo;
}
enum Golosina::setArtgolo(egolosina Artgolo) {
	this->Artgolo = Artgolo;
}