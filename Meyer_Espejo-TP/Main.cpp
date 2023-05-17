#include "Header.h"
#include <vector>
#include "Articulos.h"
#include "CarritoCompras.h"
#include "Cliente.h"
#include "Receta.h"
#include "Cajero.h"

int main() {

    vector <Articulos> CarritoMartu;

    Articulos Prod1(1, 54.3, 12);
    Articulos Prod2(2, 43.0, 9);
    Articulos Prod3(3, 109.7, 3);

    CarritoMartu.push_back(Prod1);
    CarritoMartu.push_back(Prod2);
    CarritoMartu.push_back(Prod3);

    //instancio un carrito, para probar metodos
    CarritoCompras CarritoMartu(207, 1, CarritoMartu, 0.5);


    //receta
    string Medicamento = "Vitamina";
    string Medico = "Dr.Perez";
    const unsigned int NroMatricula= 31;
    string NroAfiliado="12345";
    eOS ObraSocial= OSDE;
    
    Receta RecetaMartu(Medicamento, Medico, NroMatricula, NroAfiliado, ObraSocial);
     
   
      
    //ahora cliente
    
    string Nombre = "Martu";
    string Apellido = "Meyer";
    string DNI = "45233789";
    unsigned int CodigoSeguridad = 134;
    string Mail = "martum@gmail";
    unsigned int NroTicket = 10;
    eMetodoPago miMetodoPago = Efectivo;
    float SaldoEf = 100.0;
    double SaldoMP=1100.3;
    double SaldoTarj=900.4;
    const string CUIT="1234";
    bool FacturaFisica = true;
    eNecesidad miNecesidad = PAMI;
    
    //Cliente ClienteMartu(
     
    //Cajero
    string Nombre="Mateo";
    string Apellido="Espejo";
    float Sueldo=10000.0;

    Cajero CajeroMateo(Nombre, Apellido, Sueldo);
    
    //ticket

        //Ticket ticketMartu = CajeroMateo.Cobrar(ClienteMartu); //NO LO PUEDO HACER HASTA QUE PUEDA INSTANCIAR CLIENTE MARTU
    
    //bloque try catch


}