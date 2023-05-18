


#include "Cleaner.h"


Cleaner::Cleaner(string nombre, string apellido, float sueldo) :Empleado(nombre,apellido,sueldo)
{

}
Cleaner::~Cleaner() {

}

bool Cleaner::LimpiaryOrdenar(Local miLocal) {
	if (miLocal.get_Limpio() == false)
		return false;
	else
		return true;
}

