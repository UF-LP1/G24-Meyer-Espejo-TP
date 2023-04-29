
#ifndef _FARMACEUTICO_H
#define _FARMACEUTICO_H

#include "Empleado.h"
#include "Articulos.h"
#include "Cliente.h"

class Farmaceutico : public Empleado {
public:


    Farmaceutico(string Nombre, string Apellido, time_t HorarioLaboral, float Sueldo, unsigned int NroMatricula);
    ~Farmaceutico();




   /* void VentaMedicamentosReceta(Cliente miCliente, Articulos miArticulos);

    void RecomendacionVentaLibre(Articulos miArticulos);


    void AconsejaDosificacion(Articulos miArticulos);

    unsigned int get_NroMatricula();*/


private:
    unsigned int NroMatricula;
};

#endif //_FARMACEUTICO_H