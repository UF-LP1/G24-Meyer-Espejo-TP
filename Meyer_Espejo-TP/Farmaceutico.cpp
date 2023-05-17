

#include "Farmaceutico.h"


Farmaceutico::Farmaceutico(string nombre, string apellido, float sueldo,unsigned int nroMatricula) :Empleado(nombre, apellido, sueldo) {
	this->NroMatricula = nroMatricula;
}
Farmaceutico::~Farmaceutico() {}


bool Farmaceutico::VerificarReceta(Receta miReceta) {
	if (miReceta.get_Vencimiento() == true)
		return false; //no es valida
	else
		return true; //es valida
}


bool Farmaceutico::VentaMedicamentos(Cliente &miCliente,Articulos miFarmacia) {
	
	CarritoCompras miCarrito = miCliente.get_Carrito();
		
	if (miFarmacia.get_ObligReceta() == true) //es con receta
	{
		bool Verificacion = VerificarReceta(miCliente.get_Receta());
		if (Verificacion == false)
			return false;
		else //la agrego al carrito
		{
		

		//Farmacia AgregarProducto (miFarmacia.get_Precio(), miFarmacia.get_Stock(), miFarmacia.get_Codigo(), miFarmacia.get_ArtFarm(), miFarmacia.get_ObligReceta());

	//miCarrito.set_UnArticulo(AgregarProducto);

		Articulos AgregarProducto(miArticulo.get_Precio(), miArticulo.get_Stock(), miArticulo.get_Codigo());


		//miCliente.set_Carrito(miCarrito);

		}	

	}
	else //no es con receta (venta libre) 
		//lo sumo al carrito
}

//void Farmaceutico::RecomendacionVentaLibre(Articulos miArticulos) {
//
//}
//
//void Farmaceutico::AconsejaDosificacion(Articulos miArticulos) {
//
//}

unsigned int Farmaceutico::get_NroMatricula() {
    return this->NroMatricula;
}

