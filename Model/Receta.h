/**
 * Project Untitled
 */


#ifndef _RECETA_H
#define _RECETA_H

class Receta {
public: 
    
/**
 * @param string
 * @param string
 * @param unsigned int
 * @param string
 * @param string
 * @param string
 */
void Receta(void string, void string, void unsigned int, void string, void string, void string);
    
string get_medicamento();
    
string get_dosificacion();
    
string get_nroAfiliado();
    
string get_obrasocial();
    
/**
 * @param string ObraSocial
 */
string set_obrasocial(void string ObraSocial);
    
/**
 * @param string Dosificacion
 */
string set_dosificacion(void string Dosificacion);
    
/**
 * @param string Medicamento
 */
string set_medicamento(void string Medicamento);
protected: 
    
void Receta();
private: 
    string Medicamento;
    string Medico;
    const unsigned int NroMatricula;
    string NroAfiliado;
    string ObraSocial;
    string Dosificacion;
};

#endif //_RECETA_H