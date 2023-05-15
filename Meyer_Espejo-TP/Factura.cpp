#include "Factura.h"

Factura::Factura(float monto, string nombre, string apellido, bool formato, vector<Articulos> artcomprados) {
	this->MontoFinal = monto;
	this->NombreCliente = nombre;
	this->ApellidoCliente = apellido;
	this->facturafisica = formato;
	this->ArticulosComprados = artcomprados;
}

Factura::~Factura() {

}

