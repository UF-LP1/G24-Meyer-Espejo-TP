

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

bool Farmaceutico::VentaMedicamentos(Cliente &miCliente) {
	
	CarritoCompras miCarrito = miCliente.get_Carrito(); //lo copio en una variable asi se que es su carrito (simplicidad para escribir)
	
	if (miFarmacia.get_ObligReceta() == true) //es con receta
	{
		bool Verificacion = VerificarReceta(miCliente.get_Receta());
		if (Verificacion == false) //no valida
			return false;
		else //la agrego al carrito
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

bool Farmaceutico:: revisionMed(Cliente MiCliente,vector<Articulos*>ListaArticuloslocal)
{
	vector<eArticulosLocal>AuxiliarDeseo;
	AuxiliarDeseo = MiCliente.get_ProductosQuiero();

	for (int i = 0; i < ListaArticuloslocal.size(); i++)
	{
		for (int j = 0; j < AuxiliarDeseo.size(); j++)
		{
			Articulos* auxiliar = ListaArticuloslocal[i];

			if ((*ListaArticuloslocal[i]).get_articuloslocal() == AuxiliarDeseo[j])
			{
				if (int(AuxiliarDeseo[i]) >=0 && int(AuxiliarDeseo[i]) < 3) //verifico que sea un producto de la parte de medicamentos 
				{

					if ((*ListaArticuloslocal[i]).get_Stock() > 1) //verifico q haya stock
					{
						if (dynamic_cast<Farmacia*>(*ListaArticuloslocal[i]) != NULL) //ayuda mailen
						{
							//agrego al carrito
						}
					}

				}

			}
		}
	}
}


unsigned int Farmaceutico::get_NroMatricula() {
    return this->NroMatricula;
}

