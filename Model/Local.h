/**
 * Project Untitled
 */


#ifndef _LOCAL_H
#define _LOCAL_H

class Local {
public: 
    
/**
 * @param string
 * @param string
 * @param date
 * @param date
 * @param string
 */
void Local(void string, void string, void date, void date, void string);
    
/**
 * @param string contacto
 */
string set Contacto(void string contacto);
    
date get HorarioSemana();
protected: 
    
void Local();
private: 
    string Nombre;
    string Direccion;
    date HorarioSemana;
    date HorarioFinDeSemana;
    string Contacto;
};

#endif //_LOCAL_H