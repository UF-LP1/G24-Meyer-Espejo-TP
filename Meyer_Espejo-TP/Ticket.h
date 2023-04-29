
#include "eMetodoPago.h"
#include "Libreria.h"



#ifndef _TICKET_H
#define _TICKET_H

class Ticket {
public:


    Ticket(float PrecioFinal, string DNI,enum eMetodoPago MetodoPago, string CUIT);
    ~Ticket();

    /*bool AplicarDescuento();*/


private:
    float PrecioFinal;
    const string DNI;
    eMetodoPago MetodoPago;
    const string CUIT;
};

#endif //_TICKET_H