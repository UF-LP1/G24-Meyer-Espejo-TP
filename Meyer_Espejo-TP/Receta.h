
#ifndef _RECETA_H
#define _RECETA_H
#include "Libreria.h"
class Receta {
public:
    Receta(string Medicamento, string Medico, const unsigned int NroMatricula, string NroAfiliado, string ObraSocial, string Dosificacion);
    ~Receta();
    string get_medicamento();

    string get_dosificacion();

    string get_nroAfiliado();

    string get_obrasocial();

    void set_ObraSocial(string obrasocial);
    void set_Dosificacion(string dosificacion);
    void set_Medicamento(string medicamento);

private:
    string Medicamento;
    string Medico;
    const unsigned int NroMatricula;
    string NroAfiliado;
    string ObraSocial;
    string Dosificacion;
};

#endif //_RECETA_H