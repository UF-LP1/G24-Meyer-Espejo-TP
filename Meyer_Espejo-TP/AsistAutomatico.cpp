
#include "AsistAutomatico.h"
AsistAutomatico::AsistAutomatico(eNecesidad Necesidad, string NroTurno) {
    this->necesidad = Necesidad;
    this->nroTurno = NroTurno;
}
AsistAutomatico::~AsistAutomatico() {}

string AsistAutomatico::get_NroTurno() {
    return this->NroTurno;
}

string AsistAutomatico::ImprimirTicket(eNecesidad necesidad) {

}

enum AsistAutomatico::get_Necesidad() {
    return this->necesidad;
}

void AsistAutomatico::set_Necesidad(eNecesidad necesidad) {
    this->Necesidad = necesidad;
}

string AsistAutomatico::get NroTurno() {
    return this->NroTurno;
}
