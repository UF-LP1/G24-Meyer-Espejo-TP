
#include "eMetodoPago.h"
#include "Header.h"
#include "CarritoCompras.h"



#ifndef _TICKET_H
#define _TICKET_H

class Ticket {
public:


    Ticket(bool aprobada, string DNI, enum eMetodoPago MetodoPago, string CUIT);
    Ticket(bool aprobada, float preciofinal, string DNI, enum eMetodoPago MetodoPago, string CUIT);
    ~Ticket();
    void set_PrecioFinal(float aux);
    float get_PrecioFinal();
    bool get_Aprobada();
    string get_DNI(); //la uso para probar el metodo (main)

private:
    bool Aprobada; //true si fue existosa
    float PrecioFinal; //equivale a montototal (atr.Carrito) mas el descuento aplicado
     string DNI;
    eMetodoPago MetodoPago;
    string CUIT;
};

#endif //_TICKET_H