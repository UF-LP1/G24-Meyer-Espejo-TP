#include "Factura.h"

Factura::Factura(float monto, string nombre, string apellido, bool formato, vector<Articulos> artcomprados) {
	this->MontoFinal = monto;
	this->NombreCliente = nombre;
	this->ApellidoCliente = apellido;
	this->facturafisica = formato;
	this->ArticulosComprados = artcomprados;
}

Factura::Factura() {}

Factura::~Factura() {

}

vector<Articulos> Factura:: get_ArtComprados()
{
	return this->ArticulosComprados;
}
float Factura::get_MontoFinal()
{
	return this->MontoFinal;
}
string Factura::get_NombreCliente()
{
	return this->NombreCliente;
}