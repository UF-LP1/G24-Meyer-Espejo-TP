
#include "eMetodoPago.h"
#include "Header.h"
#include "CarritoCompras.h"



#ifndef _TICKET_H
#define _TICKET_H

class Ticket {
public:


    Ticket(bool Aprobada, string DNI,enum eMetodoPago MetodoPago, string CUIT);
    ~Ticket();
    void set_PrecioFinal(float aux);
    float get_PrecioFinal();
    bool get_Aprobada();

private:
    bool Aprobada; //true si fue existosa
    float PrecioFinal; //equivale a montototal (atr.Carrito) mas el descuento aplicado
    const string DNI;
    eMetodoPago MetodoPago;
    const string CUIT;
};

#endif //_TICKET_H