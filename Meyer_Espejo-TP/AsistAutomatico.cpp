
#include "AsistAutomatico.h"
#include "eNecesidad.h"



AsistAutomatico::AsistAutomatico(string NroTurno,enum eNecesidad Necesidad) {
    this->NroTurno=NroTurno;
    this->Necesidad = Necesidad;
}

AsistAutomatico::~AsistAutomatico() {}

string AsistAutomatico::get_NroTurno() {
   return this->NroTurno;
}

string AsistAutomatico::ImprimirTicket(enum eNecesidad necesidad) {
    if (Necesidad == 0)
        return "FarmaciaObraSocial";
    if (Necesidad == 1)
        return " FarmaciaParticular";
    if (Necesidad == 2)
        return " PAMI";
    if (Necesidad == 3)
        return "Perfumeria";
    if (Necesidad == 4)
        return "Ortopedia";

}

void AsistAutomatico::set_Necesidad(enum eNecesidad necesidad) {
    this->Necesidad = necesidad;
}


