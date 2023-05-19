#include "Receta.h"
#include "eOS.h"

Receta::Receta( enum eFarmacia ArtFarnacia, string Medico, unsigned int NroMatricula, string NroAfiliado, enum eOS ObraSocial,bool vencida){
    this->ArtFarmacia=ArtFarnacia;
    this->Medico = Medico;
    this->NroAfiliado = NroAfiliado;
    this->ObraSocial = ObraSocial;
    this->Vencida = vencida;
    this->NroMatricula = NroMatricula;
}

Receta::Receta(){}


Receta::~Receta() {}





string Receta::get_nroAfiliado() {
    return this->NroAfiliado;
}

eOS Receta::get_obrasocial() {
    return this->ObraSocial;
}



bool Receta:: get_Vencimiento() {
    return this->Vencida;
}
eFarmacia Receta:: getArtFarm() {
    return this->ArtFarmacia;

}