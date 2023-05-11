
#ifndef _CLIENTE_H
#define _CLIENTE_H
#include "Libreria.h"
class Cliente {
public:
    Cliente(string Nombre, string Apellido, string DNI, unsigned int CodigoSeguridad, unsigned int NroTicket,enum eMetodoPago metodoAutilizar);
    ~Cliente();
    /*unsigned int SacarTicket(AsistAutomatico miAsistAutomatico);
    void EntregarSolicitado();
    void Abonar(Ticket miTicket);
    string get_Mail();
    unsigned int set_CodigoSeguridad(unsigned int codigoSeguridad);
    ////string get_DNI();
    unsigned int get_CodigoSeguridad();
    unsigned int get_NroTicket();*/
   string get_DNI();
   eMetodoPago get_miMetodoPago();
private:
    string Nombre;
    string Apellido;
    string DNI;
    unsigned int CodigoSeguridad;
    string Mail;
    unsigned int NroTicket;
    eMetodoPago miMetodoPago;


};

#endif //_CLIENTE_H