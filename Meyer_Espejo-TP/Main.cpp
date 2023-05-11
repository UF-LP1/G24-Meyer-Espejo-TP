#include "Libreria.h"
#include "Articulos.h"
#include <iostream>
#include "CarritoCompras.h"



int main() {
	
	//creo lista de articuloscarrito
	
	vector<Articulos> articuloscarrito;

	Articulos Elemento1(01, 120.0, 50);
	Articulos Elemento2(02, 32.0, 12);
	Articulos Elemento3(03, 240.5, 300);
	Articulos Elemento4(44, 122.5, 75);
	Articulos Elemento5(55, 16.0, 14); 

	articuloscarrito.push_back(Elemento1);
	articuloscarrito.push_back(Elemento2);
	articuloscarrito.push_back(Elemento3);
	articuloscarrito.push_back(Elemento4);
	articuloscarrito.push_back(Elemento5);

	// creo CarritoDeCompras
	CarritoCompras SuCarrito (100.5, 1, articuloscarrito)
	









	return 0;
}