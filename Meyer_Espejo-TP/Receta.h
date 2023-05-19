
#ifndef _RECETA_H
#define _RECETA_H
#include "Header.h"
#include "eOS.h"
#include "eFarmacia.h"
class Receta {
public:
    Receta(enum eFarmacia ArtFarnacia, string Medico,unsigned int NroMatricula, string NroAfiliado, enum eOS ObraSocial,bool vencida);
    ~Receta();
    Receta();
    eFarmacia getArtFarm();
    string get_nroAfiliado();
    eOS get_obrasocial();
  
    bool get_Vencimiento();

private:
    eFarmacia ArtFarmacia;
    string Medico;
    unsigned int NroMatricula;
    string NroAfiliado;
    eOS ObraSocial;
    bool Vencida; //si es true pasaron la cantidad de dias para utilizarla, Invalida
    
};

#endif //_RECETA_H