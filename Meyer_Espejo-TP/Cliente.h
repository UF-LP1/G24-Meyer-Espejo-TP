
#ifndef _CLIENTE_H
#define _CLIENTE_H

class Cliente {
public:
    Cliente(string Nombre, string Apellido, string DNI, unsigned int CodigoSeguridad, unsigned int NroTicket);
    ~Cliente();
    unsigned int SacarTicket(AsistAutomatico miAsistAutomatico);
    void EntregarSolicitado();
    void Abonar(Ticket miTicket);
    string get_Mail();
    void set_CodigoSeguridad(unsigned int codigoSeguridad);
    string get_DNI();
    unsigned int get_CodigoSeguridad();
    unsigned int get_NroTicket();

private:
    string Nombre;
    string Apellido;
    string DNI;
    unsigned int CodigoSeguridad;
    string Mail;
    unsigned int NroTicket;

};

#endif //_CLIENTE_H