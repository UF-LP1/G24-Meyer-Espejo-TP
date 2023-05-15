
#ifndef _CLIENTE_H
#define _CLIENTE_H
#include "Header.h"
#include "Receta.h"
#include "Ticket.h"
#include "AsistAutomatico.h"

class Cliente {
public:
    Cliente(string Nombre, string Apellido, string DNI, unsigned int CodigoSeguridad, unsigned int NroTicket, enum eMetodoPago metodoAutilizar, string mail, float saldoef, double saldomp, double saaldotarj, Ticket ticketauxi, Receta recetaauxi, string CUIL, bool facturafis);
    ~Cliente();
    //unsigned int SacarTicket(AsistAutomatico miAsistAutomatico);
    //void EntregarSolicitado();
   // void Abonar(Ticket miTicket);
    string get_Mail();
    void set_CodigoSeguridad(unsigned int codigoSeguridad);
    unsigned int get_CodigoSeguridad();
    unsigned int get_NroTicket();
   string get_DNI();
   eMetodoPago get_miMetodoPago();
   float get_SaldoEf();
   double get_SaldoTarj();
   double get_SaldoMP();
   Receta get_Receta();
   string get_CUIL();
   void set_Ticket(Ticket aux);

private:
    string Nombre;
    string Apellido;
    string DNI;
    unsigned int CodigoSeguridad;
    string Mail;
    unsigned int NroTicket;
    eMetodoPago miMetodoPago;
    float SaldoEf;
    double SaldoMP;
    double SaldoTarj;
    Receta miReceta;
    const string CUIL;
    Ticket miTicket;
    bool FacturaFisica;
};

#endif //_CLIENTE_H