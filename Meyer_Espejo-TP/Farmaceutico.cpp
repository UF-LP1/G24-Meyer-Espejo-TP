

#include "Farmaceutico.h"


Farmaceutico::Farmaceutico(string nombre, string apellido, float sueldo,unsigned int nroMatricula) :Vendedor(nombre, apellido, sueldo) {
	this->NroMatricula = nroMatricula;
}
Farmaceutico::~Farmaceutico() {}


bool Farmaceutico::VerificarReceta(Receta miReceta) {
	if (miReceta.get_Vencimiento() == true)
		return false; //no es valida
	else
		return true; //es valida
}

//bool Farmaceutico::RevisionMed(Receta miReceta,Farmacia miFarmacia) {
//	string medicamento = miReceta.get_medicamento();
//	
//	
//}


bool Farmaceutico::VentaMedicamentos(Cliente &miCliente,Farmacia miFarmacia) {
	
	CarritoCompras miCarrito = miCliente.get_Carrito(); //lo copio en una variable asi se que es su carrito (simplicidad para escribir)
		
	if (miFarmacia.get_ObligReceta() == true) //es con receta
	{
		bool Verificacion = VerificarReceta(miCliente.get_Receta());
		if (Verificacion == false) //no valida
			return false;
		else //la agrego al carrito
		{
		Farmacia AgregarProducto (miFarmacia.get_Precio(), miFarmacia.get_Stock(), miFarmacia.get_Codigo(), miFarmacia.get_ArtFarm(), miFarmacia.get_ObligReceta());
		miCarrito.set_UnArticulo(AgregarProducto);
		miCliente.set_Carrito(miCarrito);
		}	

	}
	else //no es con receta (venta libre) 
		Farmacia AgregarProducto1 (miFarmacia.get_Precio(), miFarmacia.get_Stock(), miFarmacia.get_Codigo(), miFarmacia.get_ArtFarm(), miFarmacia.get_ObligReceta());
		miCarrito.set_UnArticulo(AgregarProducto1);
		miCliente.set_Carrito(miCarrito);
}

Cliente Farmaceutico:: revisionMed(Cliente miCliente)
{
	return miCliente;
}

unsigned int Farmaceutico::get_NroMatricula() {
    return this->NroMatricula;
}

