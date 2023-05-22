#pragma once
#include "Header.h"
#include "Empleado.h"
#include "Articulos.h"

class Vendedor :public Empleado {
public:
	Vendedor(string nombre, string apellido, float sueldo);
	 ~Vendedor();
	
};