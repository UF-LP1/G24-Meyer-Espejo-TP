#pragma once
#include "Header.h"
#include <vector>
#include "Articulos.h"

class Factura {
private:
	float MontoFinal;
	string NombreCliente;
	string ApellidoCliente;
	bool facturafisica;
	vector<Articulos> ArticulosComprados;

public:
	Factura(float monto, string nombre, string apellido, bool formato, vector<Articulos> artcomprados);
	~Factura();
	Factura();

};