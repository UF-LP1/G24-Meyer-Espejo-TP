#include "Libreria.h"
#ifndef _ASISTAUTOMATICO_H
#define _ASISTAUTOMATICO_H
#include "eNecesidad.h"

class AsistAutomatico {
public:
    AsistAutomatico(string NroTurno);
    ~AsistAutomatico();
    string ImprimirTicket(enum eNecesidad necesidad);
    void set_Necesidad(enum eNecesidad necesidad);
    string get_NroTurno();

private:
    eNecesidad Necesidad;
    string NroTurno;
};

#endif //_ASISTAUTOMATICO_H