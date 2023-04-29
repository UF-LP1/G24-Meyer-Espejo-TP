#pragma once
#include "Libreria.h"
#include "Articulos.h"
#include "Golosina.h"

class Golosina:public Articulos {
public:
	Golosina(float Precio,unsigned int Stock, enum golosina ArtGolo);
	~Golosina();
	/*enum getArtgolo(enum golosina Artgolo);
	enum setArtgolo(enum golosina Artgolo);*/

private:
	enum golosina ArtGolo;
};