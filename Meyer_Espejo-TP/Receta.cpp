#include "Receta.h"
#include "eOS.h"

Receta::Receta(string Medicamento, string Medico, const unsigned int NroMatricula, string NroAfiliado, enum eOS ObraSocial,bool vencida):NroMatricula(NroMatricula){
    this->Medicamento = Medicamento;
    this->Medico = Medico;
    this->NroAfiliado = NroAfiliado;
    this->ObraSocial = ObraSocial;
    this->Vencida = vencida;
   
}

Receta::~Receta() {}

string Receta::get_medicamento() {
    return this->Medicamento;
}



string Receta::get_nroAfiliado() {
    return this->NroAfiliado;
}

eOS Receta::get_obrasocial() {
    return this->ObraSocial;
}


void Receta::set_Medicamento(string medicamento) {
    this->Medicamento = medicamento;
}

bool Receta:: get_Vencimiento() {
    return this->Vencida;
}