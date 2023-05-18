
#ifndef _CLIENTE_H
#define _CLIENTE_H
#include "Header.h"
#include "Receta.h"
#include "Ticket.h"
#include "AsistAutomatico.h"
#include "eMetodoPago.h"
#include "Factura.h"
#include "eNecesidad.h"

class Cliente {
public:
    
    Cliente(string Nombre, string Apellido, string DNI, unsigned int CodigoSeguridad, unsigned int NroTicket, enum eMetodoPago metodoAutilizar, string mail, float saldoef, double saldomp, double saaldotarj, string CUIL, bool facturafis, eNecesidad necesidad, Receta _miReceta);
    //void SacarTicket(AsistAutomatico miAsistAutomatico);
    void Actualizar_Nro(unsigned int NroTurno, AsistAutomatico MiAsistAutomatico);
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
   string get_CUIT();
   void set_Ticket(Ticket auxi);
   void set_Factura (Factura aux);
   eNecesidad get_miNecesidad();
   bool get_formato();
   string get_Nombre();
   string get_Apellido();
   void set_Carrito(CarritoCompras auxi);
   CarritoCompras get_Carrito();
   vector<Articulos>get_ProductosQuiero();

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
    const string CUIT;
    Ticket miTicket;
    bool FacturaFisica;
    Factura miFactura;
    eNecesidad miNecesidad;
    CarritoCompras miCarrito;
    vector<Articulos>ProductosQuiero;
};

#endif //_CLIENTE_H