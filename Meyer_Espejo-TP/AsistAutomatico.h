#include "Header.h"
#ifndef _ASISTAUTOMATICO_H
#define _ASISTAUTOMATICO_H
#include "eNecesidad.h"

class AsistAutomatico {
public:
    AsistAutomatico(unsigned int NroTurno,enum eNecesidad Necesidad);
    ~AsistAutomatico();
   string ImprimirTicket();
   unsigned int get_NroTurno();

private:
    eNecesidad Necesidad;
    unsigned int NroTurno;
};

#endif //_ASISTAUTOMATICO_H