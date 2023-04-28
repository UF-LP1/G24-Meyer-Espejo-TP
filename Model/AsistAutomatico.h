/**
 * Project Untitled
 */


#ifndef _ASISTAUTOMATICO_H
#define _ASISTAUTOMATICO_H

class AsistAutomatico {
public: 
    
/**
 * @param eNecesidad
 * @param unsigned int
 */
void AsistAutomatico(void eNecesidad, void unsigned int);
    
/**
 * @param eNecesidad necesidad
 */
string ImprimirTicket(void eNecesidad necesidad);
    
enum get Necesidad();
    
/**
 * @param eNecesidad necesidad
 */
enum set Necesidad(void eNecesidad necesidad);
    
string get NroTurno();
protected: 
    
void AsistAutomatico();
private: 
    eNecesidad Necesidad;
    string NroTurno;
};

#endif //_ASISTAUTOMATICO_H