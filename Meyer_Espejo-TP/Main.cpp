#include "Header.h"
#include <vector>
#include "Articulos.h"
#include "CarritoCompras.h"
#include "Cliente.h"
#include "Receta.h"
#include "Cajero.h"
#include "Manager.h"

int main() {

    vector <Articulos> CarritoPrueba;

    Articulos Prod1(1, 54.3, 12);
    Articulos Prod2(2, 43.0, 9);
    Articulos Prod3(3, 109.7, 3);

    CarritoPrueba.push_back(Prod1);
    CarritoPrueba.push_back(Prod2);
    CarritoPrueba.push_back(Prod3);

    //instancio un carrito, para probar metodos
    CarritoCompras Carrito(207, 1, CarritoPrueba);


    //receta
    string Medicamento = "Vitamina";
    string Medico = "Dr.Perez";
    const unsigned int NroMatricula= 31;
    string NroAfiliado="12345";
    eOS ObraSocial= OSDE;
    bool vencida = false;
    
    //instancio un receta, para probar metodos
    Receta RecetaMartu(Medicamento, Medico, NroMatricula, NroAfiliado, ObraSocial,vencida);

   
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
    eNecesidad miNecesidad = Perfumeria;
    
    
    Cliente ClienteMartu(Nombre,Apellido,DNI,CodigoSeguridad,NroTicket,miMetodoPago,Mail,SaldoEf,SaldoMP,SaldoTarj,CUIT,FacturaFisica,miNecesidad);

        
    //Cajero
    string NombreC="Mateo";
    string ApellidoC="Espejo";
    float SueldoC=10000.0;

    Cajero CajeroMateo(NombreC, ApellidoC, SueldoC);
    
    //Local
    string NombreL = "Azul";
    string Direccion="Sarmiento18";
    string Contacto="1154678940";
    bool limpio=true;

    Local LocalAzul(NombreL, Direccion, Contacto, limpio);

    //Manager
    string nombreM = "Luis";
    string apellidoM = "Perez";
    float sueldoM = 1000.0;

    Manager ManagerLuis(nombreM, apellidoM, sueldoM);

    Ticket prueba= ManagerLuis.FacturaryGeneraTicket(ClienteMartu, LocalAzul);

    //para chequear imprimo ese ticket

    cout << "Precio Final:" << prueba.get_PrecioFinal();
    cout << "\n Dni:" << prueba.get_DNI() << endl;



        //ticket

          //Ticket ticketMartu = CajeroMateo.Cobrar(ClienteMartu); 

        //bloque try catch

        return 0;
}