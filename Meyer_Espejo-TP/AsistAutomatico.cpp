
#include "AsistAutomatico.h"
#include "eNecesidad.h"



AsistAutomatico::AsistAutomatico(string NroTurno) {
    this->NroTurno=NroTurno;
}
AsistAutomatico::~AsistAutomatico() {}

string AsistAutomatico::get_NroTurno() {
    return this->NroTurno;
}

string AsistAutomatico::ImprimirTicket(enum eNecesidad necesidad) {}

void AsistAutomatico::set_Necesidad(enum eNecesidad necesidad) {
    this->Necesidad = necesidad;
}

string AsistAutomatico::get_NroTurno() {
    return this->NroTurno;
}
