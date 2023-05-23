#pragma once
#include "Header.h"
#include "Articulos.h"
#include "Golosina.h"

class Golosina:public Articulos {
public:
	Golosina(float precio, unsigned int stock, unsigned int codigo, eNecesidad tipoarticulo,enum golosina artGolo);
	~Golosina();
	

private:
	enum golosina ArtGolo;
};