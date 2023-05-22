
#ifndef _CLIENTE_H
#define _CLIENTE_H
#include "Header.h"
#include "Receta.h"
#include "Ticket.h"
#include "AsistAutomatico.h"
#include "eMetodoPago.h"
#include "Factura.h"
#include "eNecesidad.h"
#include "eArticulosLocal.h"

class Cliente {
public:
    ~Cliente();
    Cliente(string Nombre, string Apellido, string DNI, unsigned int CodigoSeguridad, unsigned int NroTicket, enum eMetodoPago metodoAutilizar, string mail, float saldoef, double saldomp, double saaldotarj, string CUIL, bool facturafis, eNecesidad necesidad);
    Cliente(string Nombre, string Apellido, string DNI, unsigned int CodigoSeguridad, unsigned int NroTicket, enum eMetodoPago metodoAutilizar, string mail, string CUIL, bool facturafis, eNecesidad necesidad);
    Cliente(CarritoCompras carrito,string Nombre, string Apellido, string DNI, unsigned int CodigoSeguridad, unsigned int NroTicket, enum eMetodoPago metodoAutilizar, string mail, float saldoef, double saldomp, double saaldotarj, string CUIL, bool facturafis, eNecesidad necesidad);
    void Actualizar_Nro(AsistAutomatico MiAsistAutomatico);
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
   enum eNecesidad get_miNecesidad();
   bool get_formato();
   string get_Nombre();
   string get_Apellido();
   void set_SaldoEf(float SaldoEf);
   void set_SaldoTarj(double SaldoTarj);
   void set_SaldoMP(double SaldoMP);


   void set_Carrito(CarritoCompras auxi);
   CarritoCompras get_Carrito();
   vector<eArticulosLocal> get_ProductosQuiero();
   Ticket get_Ticket();

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
    vector<eArticulosLocal>ProductosQuiero;
};

#endif //_CLIENTE_H