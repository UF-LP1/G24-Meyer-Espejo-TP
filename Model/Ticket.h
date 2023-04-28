/**
 * Project Untitled
 */


#ifndef _TICKET_H
#define _TICKET_H

class Ticket {
public: 
    
/**
 * @param float
 * @param const string
 * @param eMetodoPago
 * @param const string
 * @param bool
 */
void Ticket(void float, void const string, void eMetodoPago, void const string, void bool);
    
bool AplicarDescuento();
protected: 
    
void Ticket();
private: 
    float PrecioFinal;
    const string DNI;
    eMetodoPago MetodoPago;
    const string CUIT;
    bool Descuento;
};

#endif //_TICKET_H