#pragma once
#include "Header.h"
#include "Empleado.h"
#include "Articulos.h"

class Vendedor :public Empleado {
public:
	Vendedor(string nombre, string apellido, float sueldo);
	 ~Vendedor();
	 virtual void RevisionArticulos(Cliente miCliente,vector <Articulos*>ListaArticuloslocal)=0; //lo voy a redefinir en sus clases hijas

	
	
};