#pragma once
#include "Empleado.h"
#include "Local.h"
#include "EmpleadoOrtopedia.h"
#include "EmpleadoPerfumeria.h"
#include "Farmaceutico.h"

//esta clase seria el empleado que solo se encarga de generar ticket,calcular descuento,actualizar precio y asignar a donde va

class Manager :public Empleado {
public: 
	Manager(string nombre, string apellido, float sueldo);
	~Manager();
	float ActualizarPrecio(Receta miReceta, CarritoCompras miCarrito);
	Ticket FacturaryGeneraTicket(Cliente& miCliente, Local& miLocal);
	float CalculaDescuento(Receta miReceta);
	Cliente ReubicarCliente(Local miLocal,EmpleadoOrtopedia EmpOrtop, EmpleadoPerfumeria EmpPerf,Farmaceutico Farmaceutico);
};