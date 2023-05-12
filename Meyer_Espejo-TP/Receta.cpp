#include "Receta.h"

Receta::Receta(string Medicamento, string Medico, const unsigned int NroMatricula, string NroAfiliado, eObraSocialesVarias ObraSocial, string Dosificacion) :NroMatricula(NroMatricula) {
    this->Medicamento = Medicamento;
    this->Medico = Medico;
    this->NroAfiliado = NroAfiliado;
    this->ObraSocial = ObraSocial;
    this->Dosificacion = Dosificacion;
}

Receta::~Receta() {}

string Receta::get_medicamento() {
    return this->Medicamento;
}

string Receta::get_dosificacion() {
    return this->Dosificacion;
}

string Receta::get_nroAfiliado() {
    return this->NroAfiliado;
}

eObraSocialesVarias Receta::get_obrasocial() {
    return this->ObraSocial;
}


//void Receta::set_ObraSocial(string obrasocial) {
//    this->ObraSocial = obrasocial;
//}
//
//void Receta::set_Dosificacion(string dosificacion) {
//    this->Dosificacion = dosificacion;
//}
//
//void Receta::set_Medicamento(string medicamento) {
//    this->Medicamento = medicamento;
//}