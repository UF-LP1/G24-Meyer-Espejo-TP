#ifndef _ASISTAUTOMATICO_H
#define _ASISTAUTOMATICO_H

class AsistAutomatico {
public:
    AsistAutomatico(eNecesidad Necesidad,string NroTurno);
    ~AsistAutomatico();
    string ImprimirTicket(eNecesidad necesidad);
    enum get_Necesidad();
    void set_Necesidad(eNecesidad necesidad);
    string get_NroTurno();

private:
    eNecesidad Necesidad;
    string NroTurno;
};

#endif //_ASISTAUTOMATICO_H