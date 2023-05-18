
#include "AsistAutomatico.h"
#include "eNecesidad.h"



AsistAutomatico::AsistAutomatico(unsigned int NroTurno,enum eNecesidad Necesidad) {
    this->NroTurno=NroTurno;
    this->Necesidad = Necesidad;
}

AsistAutomatico::~AsistAutomatico() {}

unsigned int AsistAutomatico::get_NroTurno() {
   return this->NroTurno;
}

string AsistAutomatico::ImprimirTicket() {
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




