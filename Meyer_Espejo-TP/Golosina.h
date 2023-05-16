#pragma once
#include "Header.h"
#include "Articulos.h"
#include "Golosina.h"

class Golosina:public Articulos {
public:
	Golosina(float precio, unsigned int stock, unsigned int codigo, enum golosina artGolo);
	~Golosina();
	/*enum getArtgolo(enum golosina Artgolo);
	enum setArtgolo(enum golosina Artgolo);*/

private:
	enum golosina ArtGolo;
};