#include "Header.h"
#include <vector>
#include "Articulos.h"
#include "CarritoCompras.h"
#include "Cliente.h"
#include "Receta.h"
#include "Cajero.h"
#include "Manager.h"
#include <queue>
#include "eArticulosLocal.h"
#include <iostream>
using namespace std;

Cliente PrimeroEnCola(queue<Cliente>cola);
int main() {

    vector <Articulos> CarritoPrueba;

    Articulos Prod1(54.3, 12, 1, Perfumes, eArticulosLocal::Cremas);
    Articulos Prod2(43.0, 9, 2, Perfumes, eArticulosLocal::Maquillajes);
    Articulos Prod3(109.7, 32, 3, ArtOrtopedia, eArticulosLocal::Munequeras);

    CarritoPrueba.push_back(Prod1);
    CarritoPrueba.push_back(Prod2);
    CarritoPrueba.push_back(Prod3);

    //instancio un carrito, para probar metodos
    CarritoCompras Carrito(207, 1, CarritoPrueba);


    //receta
    eFarmacia ArtFarmacia = Vitamina;
    string Medico = "Dr.Perez";
    const unsigned int NroMatricula= 31;
    string NroAfiliado="12345";
    eOS ObraSocial= OSDE;
    bool vencida = false;
    
    //instancio un receta, para probar metodos
    Receta RecetaMartu(ArtFarmacia, Medico, NroMatricula, NroAfiliado, ObraSocial,vencida);

   
    //ahora cliente1
    
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
    eNecesidad miNecesidad = Perfumes;
    
    
    Cliente ClienteMartu(Nombre,Apellido,DNI,CodigoSeguridad,NroTicket,miMetodoPago,Mail,SaldoEf,SaldoMP,SaldoTarj,CUIT,FacturaFisica,miNecesidad);
    
    ClienteMartu.set_Carrito(Carrito);

    //ahora cliente2    
    string Nombre2 = "Jazmin";
    string Apellido2 = "Alvarez";
    string DNI2 = "47654789";
    unsigned int CodigoSeguridad2 = 05;
    string Mail2 = "jazchu@gmail";
    unsigned int NroTicket2 = 11;
    eMetodoPago miMetodoPago2 = Tarjeta;
    float SaldoEf2 =3000.5;
    double SaldoMP2 = 1234.0;
    double SaldoTarj2 = 3456.1;
    const string CUIT2 = "6789";
    bool FacturaFisica2 = false;
    eNecesidad miNecesidad2 = Medicamentos;


    Cliente ClienteJazmin(Nombre2, Apellido2, DNI2, CodigoSeguridad2, NroTicket2, miMetodoPago2, Mail2, SaldoEf2, SaldoMP2, SaldoTarj2, CUIT2, FacturaFisica2, miNecesidad2);

    
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

    vector<Articulos*>ArticulosLocal;
    Articulos Local1(54.3, 12, 1, Perfumes, eArticulosLocal::Cremas);
    Articulos Local2(43.0, 9, 2, Perfumes, eArticulosLocal::Maquillajes);
    Articulos Local3(109.7, 32, 3, ArtOrtopedia, eArticulosLocal::Munequeras);
    Articulos Local4(108.5, 3, 4, Medicamentos, eArticulosLocal::Pastillas);
    Articulos Local5(234.6, 100, 5, ArtOrtopedia, eArticulosLocal::VendaElasticas);

  ArticulosLocal.push_back(Local1);
  ArticulosLocal.push_back(Local2);
  ArticulosLocal.push_back(Local3);
  ArticulosLocal.push_back(Local4);
  ArticulosLocal.push_back(Local5);

    Local LocalAzul(NombreL, Direccion, Contacto, limpio,ArticulosLocal);


    //empleado FArmaceutico
    string NombreEF = "Jose";
    string ApellidoEF = "Diaz";
    float SueldoEF = 4000.0;
    unsigned int NroMatriculaEF = 96457;

        Farmaceutico FarmaJose(NombreEF, ApellidoEF, SueldoEF, NroMatriculaEF);

        //Empleado Ortopedia
        string NombreEO = "Juan";
        string ApellidoEO = "Ferro";
        float SueldoEO= 45666.6;

        EmpleadoOrtopedia  EmpOrtopJuan(NombreEO, ApellidoEO, SueldoEO);



        //Empelado Perfumeria
        string NombreEP = "Pepe";
        string ApellidoEP = "Mao";
        float SueldoEP = 456766.6;

        EmpleadoPerfumeria  EmpPerfPepe(NombreEP, ApellidoEP, SueldoEP);



   

    //Manager
    string nombreM = "Luis";
    string apellidoM = "Perez";
    float sueldoM = 1000.0;

    Manager ManagerLuis(nombreM, apellidoM, sueldoM);

   

   

    //PRUEBO LOS METODOS MAS IMPORTANTES

    //metodo Facturar y Generar Ticket

    Ticket prueba = ManagerLuis.FacturaryGeneraTicket(ClienteMartu, LocalAzul);

        //para chequear imprimo ese ticket

    cout << "Precio Final:" << prueba.get_PrecioFinal();
    cout << "\n Dni:" << prueba.get_DNI() << endl;

    //metodo cobrar (Cajero)

    Factura facturaprueba = CajeroMateo.Cobrar(ClienteMartu, LocalAzul);

        //voy a intentar hacer bloque try catch
    try {
        Factura FacturaA = CajeroMateo.Cobrar(ClienteMartu, LocalAzul);
        Factura FacturaB = CajeroMateo.Cobrar(ClienteMartu, LocalAzul);
    }
    catch (exception* e)
    {
        cout << "EXCEPTION" << e->what() << endl;
    }

        //imprimo Factura para verificar
    cout << "Precio final:" << facturaprueba.get_MontoFinal();
    
    vector<Articulos>ListaArticulos;
    ListaArticulos = facturaprueba.get_ArtComprados();
    cout << "\n ListaArticulos es:" << endl;
    for (int i = 0; i < ListaArticulos.size(); i++)
    {
        cout << i+1<<" -" << ListaArticulos[i].get_Precio() << endl;
    }
    cout << "\nNombre Cliente:" << facturaprueba.get_NombreCliente() << endl;

    
    
    
    
    //creo cola de Cliente
   
    queue<Cliente> ColaLocal;

    ColaLocal.push(ClienteMartu);
    ColaLocal.push(ClienteJazmin);

    LocalAzul.set_colaClientes(ColaLocal);
    
    Cliente PrimerCliente = PrimeroEnCola(ColaLocal);



    //metodo para asignar a el Empleado correspondiente (Manager)

    ManagerLuis.ReubicarCliente(PrimerCliente,ArticulosLocal, EmpOrtopJuan, EmpPerfPepe, FarmaJose);

    char Answer;
    int i = 0;
    string Respuesta;
    unsigned int var1;
    var1 = 0;
    cout << "porfavor ingrese los datos que se le van a pedir proximamente para poder realizar una compra aqui en farmacia azul, Marque S si desea continuar, N si no ";
    cin >> Answer;
    if (Answer == 'N') {
        cout << "gracias por haver visitado Farmacias Azul,que tenga un buen dia";
    }
    else {
        do {
            i++;
            cout << "ingrese su necesidad" << endl;
            cout << "1.Perfumeria" << endl;
            cout << "2.Ortopedia" << endl;
            cout << "3.Medicamentos" << endl;
            cout << "4.Golosina" << endl;

            //Esto seria rebubicar cliente
            cin >> Answer;
            // switch on the user's choice
            switch (Answer) {
            case  '1':
                cout << "Su selecion fue Perfumeria." << endl;
                break;
            case '2':
                cout << "Su selecion fue Ortopedia." << endl;
                break;
            case '3':
                cout << "Su selecion fue Medicamentos." << endl;
                break;
            case '4':
                cout << "Su selecion fue Golisina." << endl;
                break;
            case '5':
                cout << "Selecion invalida." << endl;
                i++;
            }
            i++;
        } while (Answer == '5' && i < 1);
        //Llamar a reubicar cliente
       /* cout << "ingrese su nombre";
        cin >> Respuesta;
        Nombre1 = Respuesta;
        cout << "ingrese su apellido";
        cin >> Respuesta;
        Apellido1 = Respuesta;
        cout << "ingrese su DNI";
        cin >> Respuesta;
        DNI1 = Respuesta;
        cout << "ingrese su mail";
        cin >> Respuesta;
        Mail1 = Respuesta;
        cout << "ingrese su nro de ticket";
        cin >> var1;
        NroTicket1 = var1*/
        do {
            cout << "ingrese su metodo de pago,las opciones son " << endl;
            cout << "1.Efectivo" << endl;
            cout << "2.Tarjeta" << endl;
            cout << "3.MercadoPago" << endl;
            cin >> Answer;

            // switch on the user's choice
            switch (Answer) {
            case '1':
                cout << "You chose option Efectivo." << endl;
                break;
            case '2':
                cout << "You chose option Tarjeta." << endl;
                break;
            case'3':
                cout << "You chose option MercadoPago." << endl;
                break;
            case '4':
                cout << "Invalid choice." << endl;
            }
        } while (Answer == '4');
    }
        /*  cout << "porfavor indique si desea su facturea fisica o no,con una S confirme y con una N niege";
          cin >> Answer;
          if (Answer == 'S')
          {

              FacturaFisica = true;
          }

          else
          {
              FacturaFisica = false;
          }*/


//Funcion Para obtener primero en la cola
Cliente PrimeroEnCola(queue<Cliente>cola)
{
    Cliente Primero = cola.front();        //copio en auxiliar el primero de mi cola, para no perderlo
    cola.pop(); //pongo al segundo primero

    return Primero;
}