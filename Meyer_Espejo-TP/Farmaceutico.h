
#ifndef _FARMACEUTICO_H
#define _FARMACEUTICO_H

#include "Empleado.h"
#include "Farmacia.h"
#include "Cliente.h"
#include "Header.h"
#include "Receta.h"
#include "Vendedor.h"

class Farmaceutico : public Vendedor {
public:


    Farmaceutico(string nombre, string apellido, float sueldo, unsigned int nroMatricula);
    ~Farmaceutico();
   bool VentaMedicamentos(Cliente &miCliente);
   bool VerificarReceta(Receta miReceta);
   //bool RevisionMed(Receta miReceta, Farmacia miFarmacia);
   bool revisionMed(Cliente MiCliente);
   
    unsigned int get_NroMatricula();


private:
    unsigned int NroMatricula;
};

#endif //_FARMACEUTICO_H