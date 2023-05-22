

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

void Farmaceutico::VentaMedicamentos(Cliente &miCliente, Farmacia miFarmacia) {
	
	CarritoCompras miCarrito = miCliente.get_Carrito(); //lo copio en una variable asi se que es su carrito (simplicidad para escribir)
	
	if (miFarmacia.get_ObligReceta() == true) //es con receta
	{
		bool Verificacion = VerificarReceta(miCliente.get_Receta());
		if (Verificacion == true)
		{	
			Farmacia AgregarProducto (miFarmacia.get_Precio(), miFarmacia.get_Stock(), miFarmacia.get_Codigo(), miFarmacia.get_TipoArticulo(), miFarmacia.get_ArtFarm(), miFarmacia.get_ObligReceta());
			miCarrito.set_UnArticulo(AgregarProducto);
			miCliente.set_Carrito(miCarrito);
		}	

	}
	else //no es con receta (venta libre) 
	{
		Farmacia AgregarProducto1(miFarmacia.get_Precio(), miFarmacia.get_Stock(), miFarmacia.get_Codigo(),miFarmacia.get_TipoArticulo(), miFarmacia.get_ArtFarm(), miFarmacia.get_ObligReceta());
		miCarrito.set_UnArticulo(AgregarProducto1);
		miCliente.set_Carrito(miCarrito);
	}
}

void Farmaceutico:: revisionMed(Cliente MiCliente,vector<Articulos*>ListaArticuloslocal)
{
	vector<eArticulosLocal>aux;
	aux = MiCliente.get_ProductosQuiero();
	Articulos* ptr_aux = nullptr;

	for (int i = 0; i < aux.size(); i++)
	{
		for (int j = 0; j < ListaArticuloslocal.size(); j++)
		{
			Articulos* nuevo = ListaArticuloslocal[j];
			ptr_aux = ListaArticuloslocal[j];

			if (int(aux[i]) > 10 && int(aux[i]) < 15) { //verfico que sea un Producto de ortopedia
			
					if ((*ListaArticuloslocal[j]).get_Stock() > 1) //verifico q haya stock
					{
						if (dynamic_cast<Farmacia*>(ptr_aux) != NULL) 
						{	
							
							VentaMedicamentos(MiCliente, ); //aca tengo que pasarle la farmacia como parametro y no se como hacerlo
						}
					}
				
			}
		}

	}
}



unsigned int Farmaceutico::get_NroMatricula() {
    return this->NroMatricula;
}

