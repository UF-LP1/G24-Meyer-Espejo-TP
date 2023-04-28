/**
 * Project Untitled
 */


#ifndef _CLIENTE_H
#define _CLIENTE_H

class Cliente {
public: 
    
/**
 * @param string
 * @param string
 * @param string
 * @param string
 * @param int
 * @param string
 * @param string
 * @param int
 * @param bool
 */
void Cliente(void string, void string, void string, void string, void int, void string, void string, void int, void bool);
    
/**
 * @param miAsistAutomatico
 */
unsigned int SacarTicket(AsistAutomatico miAsistAutomatico);
    
void EntregarSolicitado();
    
/**
 * @param miTicket
 */
void Abonar(Ticket miTicket);
    
string get Mail();
    
/**
 * @param unsigned int CodigoSeguridad
 */
unsigned int set CodigoSeguridad(void unsigned int CodigoSeguridad);
    
string get DNI();
    
const string get NroAfiliado();
    
unsigned int get CodigoSeguridad();
    
string get Receta();
    
unsigned int get NroTicket();
protected: 
    
void Cliente();
private: 
    string Nombre;
    string Apellido;
    string DNI;
    const string NroAfiliado;
    unsigned int CodigoSeguridad;
    string Receta;
    string Mail;
    unsigned int NroTicket;
    void SoloKiosco; bool;
};

#endif //_CLIENTE_H