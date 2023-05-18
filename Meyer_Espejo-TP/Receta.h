
#ifndef _RECETA_H
#define _RECETA_H
#include "Header.h"
#include "eOS.h"

class Receta {
public:
    Receta(string Medicamento, string Medico,unsigned int NroMatricula, string NroAfiliado, enum eOS ObraSocial,bool vencida);
    ~Receta();
    Receta();
    string get_medicamento();
    string get_nroAfiliado();
    eOS get_obrasocial();
    void set_Medicamento(string medicamento);
    bool get_Vencimiento();

private:
    string Medicamento;
    string Medico;
    unsigned int NroMatricula;
    string NroAfiliado;
    eOS ObraSocial;
    bool Vencida; //si es true pasaron la cantidad de dias para utilizarla, Invalida
    
};

#endif //_RECETA_H