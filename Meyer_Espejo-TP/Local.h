
#ifndef _LOCAL_H
#define _LOCAL_H
#include "Header.h"
#include <queue>
#include "Cliente.h"
#include <iterator>


class Local {
public:
    Local(string Nombre, string Direccion, string Contacto,bool _limpio);
    ~Local();
    bool get_Limpio();
    void AgregarTicket(Ticket NuevoTicket);
    void AgregarClienteCola(Cliente nuevoCliente);
    
    void AgregarFactura(Factura NuevaFactura);
    void set_colaClientes(queue<Cliente> nuevaCola);
    vector<Articulos>get_listaarticulos();
private:
    string Nombre;
    string Direccion;
    string Contacto;
    bool limpio;
    vector<Ticket>RegistroTickets; //se nos ocurrio que el local podria almacenar todos los ticket en una lista
    vector<Factura>RegistroFactura;
    queue<Cliente> cola_Clientes;
    vector<Articulos>ListaArticulosLocal;
};

#endif //_LOCAL_H