
#ifndef _FARMACEUTICO_H
#define _FARMACEUTICO_H

#include "Empleado.h"
#include "Articulos.h"
#include "Cliente.h"

class Farmaceutico : public Empleado {
public:


    Farmaceutico(string nombre, string apellido, float sueldo, time_t horarioLaboral, unsigned int nroMatricula);
    ~Farmaceutico();




   /* void VentaMedicamentosReceta(Cliente miCliente, Articulos miArticulos);

    void RecomendacionVentaLibre(Articulos miArticulos);


    void AconsejaDosificacion(Articulos miArticulos);

    unsigned int get_NroMatricula();*/


private:
    unsigned int NroMatricula;
};

#endif //_FARMACEUTICO_H