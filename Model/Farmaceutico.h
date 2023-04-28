
#ifndef _FARMACEUTICO_H
#define _FARMACEUTICO_H

#include "Empleado.h"


class Farmaceutico : public Empleado {
public:


    Farmaceutico(unsigned int NroMatricula);
    ~Farmaceutico();




    void VentaMedicamentosReceta(Cliente miCliente, Articulos miArticulos);

    void RecomendacionVentaLibre(Articulos miArticulos);


    void AconsejaDosificacion(Articulos miArticulos);

    unsigned int get_NroMatricula();


private:
    unsigned int NroMatricula;
};

#endif //_FARMACEUTICO_H