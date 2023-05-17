
#ifndef _FARMACEUTICO_H
#define _FARMACEUTICO_H

#include "Empleado.h"
#include "Farmacia.h"
#include "Cliente.h"
#include "Header.h"
#include "Receta.h"

class Farmaceutico : public Empleado {
public:


    Farmaceutico(string nombre, string apellido, float sueldo, unsigned int nroMatricula);
    ~Farmaceutico();
   bool VentaMedicamentos(Cliente &miCliente, Articulos miArticulo);
   bool VerificarReceta(Receta miReceta);

    /*void RecomendacionVentaLibre(Articulos miArticulos);
    void AconsejaDosificacion(Articulos miArticulos);*/
   
    unsigned int get_NroMatricula();


private:
    unsigned int NroMatricula;
};

#endif //_FARMACEUTICO_H