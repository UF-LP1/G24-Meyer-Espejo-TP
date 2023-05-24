#include "Header.h"
#include <vector>
#include "Articulos.h"
#include "CarritoCompras.h"
#include "Cliente.h"
#include "Receta.h"
#include "Cajero.h"
#include "Manager.h"
#include "eArticulosLocal.h"


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
    const unsigned int NroMatricula = 31;
    string NroAfiliado = "12345";
    eOS ObraSocial = OSDE;
    bool vencida = false;

    //instancio un receta, para probar metodos
    Receta RecetaMartu(ArtFarmacia, Medico, NroMatricula, NroAfiliado, ObraSocial, vencida);


    //ahora cliente1

    string Nombre = "Martu";
    string Apellido = "Meyer";
    string DNI = "45233789";
    unsigned int CodigoSeguridad = 134;
    string Mail = "martum@gmail";
    unsigned int NroTicket = 10;
    eMetodoPago miMetodoPago = Efectivo;
    float SaldoEf = 100.0;
    double SaldoMP = 1100.3;
    double SaldoTarj = 900.4;
    const string CUIT = "1234";
    bool FacturaFisica = true;
    eNecesidad miNecesidad = Perfumes;


    Cliente ClienteMartu(Nombre, Apellido, DNI, CodigoSeguridad, NroTicket, miMetodoPago, Mail, SaldoEf, SaldoMP, SaldoTarj, CUIT, FacturaFisica, miNecesidad);

    ClienteMartu.set_Carrito(Carrito);

    //ahora cliente2    
    string Nombre2 = "Jazmin";
    string Apellido2 = "Alvarez";
    string DNI2 = "47654789";
    unsigned int CodigoSeguridad2 = 05;
    string Mail2 = "jazchu@gmail";
    unsigned int NroTicket2 = 11;
    eMetodoPago miMetodoPago2 = Tarjeta;
    float SaldoEf2 = 3000.5;
    double SaldoMP2 = 1234.0;
    double SaldoTarj2 = 3456.1;
    const string CUIT2 = "6789";
    bool FacturaFisica2 = false;
    eNecesidad miNecesidad2 = Medicamentos;


    Cliente ClienteJazmin(Nombre2, Apellido2, DNI2, CodigoSeguridad2, NroTicket2, miMetodoPago2, Mail2, SaldoEf2, SaldoMP2, SaldoTarj2, CUIT2, FacturaFisica2, miNecesidad2);


    //Cajero
    string NombreC = "Mateo";
    string ApellidoC = "Espejo";
    float SueldoC = 10000.0;

    Cajero CajeroMateo(NombreC, ApellidoC, SueldoC);

    //Local
    string NombreL = "Azul";
    string Direccion = "Sarmiento18";
    string Contacto = "1154678940";
    bool limpio = true;

    vector<Articulos*>ArticulosLocal;


    Perfumeria Local1(54.3, 12, 1, Perfumes, "100ml", Crema);
    Ortopedia  Local2(54.3, 8, 4, ArtOrtopedia, Munequera);
    Farmacia   Local3(45.6, 5, 67, Medicamentos, Vitamina, true);
    Farmacia   Local4(50.6, 7, 34, Medicamentos, Pastilla, true);
    Ortopedia  Local5(23.4, 2, 12, ArtOrtopedia, Cabestrillo);
    Perfumeria Local6(89.4, 67, 45, Perfumes,"250ml", Shampoo);
    Perfumeria Local7(83.5, 87, 41, Perfumes, "150ml", Jabon);
    Perfumeria Local8(12.6, 85, 23, Perfumes, "350ml", Desodorante);
    Perfumeria Local9(123.6, 586, 79, Perfumes, "10g", Maquillaje);
    Perfumeria Local10(85.7, 162, 90, Perfumes, "50ml", Cosmetica);
    Perfumeria Local11(354.6,867, 94, Perfumes, "50g", EsmalteUnia);
    Perfumeria Local12(1000.6, 908, 678, Perfumes, "250ml", Perfume);
    Ortopedia  Local13(3458, 23, 235, ArtOrtopedia, VendaElastica);
    Ortopedia  Local14(5000, 346, 2344, ArtOrtopedia, MediaComprension);

    //minimo hasta el 14
    ArticulosLocal.push_back(&Local1);
    ArticulosLocal.push_back(&Local2);
    ArticulosLocal.push_back(&Local3);
    ArticulosLocal.push_back(&Local4);
    ArticulosLocal.push_back(&Local5);
    ArticulosLocal.push_back(&Local6);
    ArticulosLocal.push_back(&Local7);
    ArticulosLocal.push_back(&Local8);
    ArticulosLocal.push_back(&Local9);
    ArticulosLocal.push_back(&Local10);
    ArticulosLocal.push_back(&Local11);
    ArticulosLocal.push_back(&Local12);
    ArticulosLocal.push_back(&Local13);
    ArticulosLocal.push_back(&Local14);
    


    Local LocalAzul(NombreL, Direccion, Contacto, limpio, ArticulosLocal);
   /* LocalAzul.set_ArticulosLocal(ArticulosLocal);*/

    //empleado FArmaceutico
    string NombreEF = "Jose";
    string ApellidoEF = "Diaz";
    float SueldoEF = 4000.0;
    unsigned int NroMatriculaEF = 96457;

    Farmaceutico FarmaJose(NombreEF, ApellidoEF, SueldoEF, NroMatriculaEF);

    //Empleado Ortopedia
    string NombreEO = "Juan";
    string ApellidoEO = "Ferro";
    float SueldoEO = 45666.6;

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

    ////para chequear imprimo ese ticket

    //cout << "Precio Final:" << prueba.get_PrecioFinal();
    //cout << "\n Dni:" << prueba.get_DNI() << endl;

    ////metodo cobrar (Cajero)

    //Factura facturaprueba = CajeroMateo.Cobrar(ClienteMartu, LocalAzul);

    ////voy a intentar hacer bloque try catch
    //try {
    //    Factura FacturaA = CajeroMateo.Cobrar(ClienteMartu, LocalAzul);
    //    Factura FacturaB = CajeroMateo.Cobrar(ClienteMartu, LocalAzul);
    //}
    //catch (exception* e)
    //{
    //    cout << "EXCEPTION" << e->what() << endl;
    //}

    ////imprimo Factura para verificar
    //cout << "Precio final:" << facturaprueba.get_MontoFinal();

    //vector<Articulos>ListaArticulos;
    //ListaArticulos = facturaprueba.get_ArtComprados();
    //cout << "\n ListaArticulos es:" << endl;
    //for (int i = 0; i < ListaArticulos.size(); i++)
    //{
    //    cout << i + 1 << " -" << ListaArticulos[i].get_Precio() << endl;
    //}
    //cout << "\nNombre Cliente:" << facturaprueba.get_NombreCliente() << endl;





    //creo cola de Cliente

    queue<Cliente>ColaLocal;

    ColaLocal.push(ClienteMartu);
    ColaLocal.push(ClienteJazmin);

    LocalAzul.set_colaClientes(ColaLocal);

    Cliente PrimerCliente = PrimeroEnCola(ColaLocal);








    //ingreso por consola
    char Answer;
    eMetodoPago MetododePagoP{};
    int i = 0;
    string NombreP;
    string ApellidoP;
    string DNIP;
    string MailP;
    unsigned int NroTicketP;
    unsigned int necesidad;
    eNecesidad NecesidadP;
    bool FacturaFisicaP;
    unsigned int CodigoSeguridadP;
    string  CUITP;
    double SaldoP;
    float SaldoEP;
    eArticulosLocal Respuesta;
    int variable1 = 0;
    static_cast<eMetodoPago>(variable1);
    int variable2 = 0;
    static_cast<eArticulosLocal>(variable2);


    cout << "porfavor ingrese los datos que se le van a pedir proximamente para poder realizar una compra aqui en farmacia azul, Marque S si desea continuar, N si no " << endl;
    cin >> Answer;
    system("cls");
    if (Answer == 'N') {
        cout << "gracias por haber visitado Farmacias Azul,que tenga un buen dia" << endl;
    }
    else {

        cout << "ingrese su nombre" << endl;
        cin >> NombreP;
        system("cls");
        cout << "ingrese su apellido" << endl;
        cin >> ApellidoP;
        system("cls");
        cout << "ingrese su DNI" << endl;
        cin >> DNIP;
        system("cls");
        cout << "ingrese su CUIT" << endl;
        cin >> CUITP;
        system("cls");
        cout << "ingrese su mail" << endl;
        cin >> MailP;
        system("cls");
        cout << "ingrese su NroTicket" << endl;
        cin >> NroTicketP;
        system("cls");
        cout << "Codigo Seguridad" << endl;
        cin >> CodigoSeguridadP;
        system("cls");
        do {
            i++;
            cout << "ingrese su necesidad" << endl;
            cout << "0.Medicamentos" << endl;
            cout << "1.Perfumes" << endl;
            cout << "2.ArtOrtopedia" << endl;
            cout << "3.Golosina" << endl;

            cin >> necesidad;

            NecesidadP = eNecesidad(necesidad);

            // switch on the user's choice
            switch (necesidad) {
            case  '0':
                cout << "Su selecion fue Perfumeria." << endl;
                break;
            case '1':
                cout << "Su selecion fue Ortopedia." << endl;
                break;
            case '2':
                cout << "Su selecion fue Medicamentos." << endl;
                break;
            case '3':
                cout << "Su selecion fue Golisina." << endl;
                break;
            case '4':
                cout << "Selecion invalida." << endl;
                
            }
            i++;
        } while (necesidad == '4' && i < 1);

       
        do {
            cout << "ingrese su metodo de pago,las opciones son " << endl;
            cout << "0.Efectivo" << endl;
            cout << "1.Tarjeta" << endl;
            cout << "2.MercadoPago" << endl;
            cin >> variable1;
           
            //por ahi no le gusta esto
            // switch on the user's choice
            switch (variable1) {
            case '0':
                cout << "You chose option Efectivo." << endl;
                break;
            case '1':
                cout << "You chose option Tarjeta." << endl;
                break;
            case'2':
                cout << "You chose option MercadoPago." << endl;
                break;
            case '3':
                cout << "Invalid choice." << endl;
            }
        } while (variable1 == '3');

        cout << "porfavor indique si desea su facturea fisica o no,con una S confirme y con una N niege";
        cin >> Answer;
        if (Answer == 'S')
        {
            FacturaFisicaP = true;
        }

        else
        {
            FacturaFisicaP = false;
        }
    }
    Cliente ClienteConsola(NombreP, ApellidoP, DNIP, CodigoSeguridadP, NroTicketP, MetododePagoP, MailP, CUITP, FacturaFisicaP, NecesidadP);

    //seteamos saldo en base a su metodo de pago
    if (variable1 == 0) {
        cout << "ingrese saldo en efectivo" << endl;
        cin >> SaldoEP;
        ClienteConsola.set_SaldoEf(SaldoEP);

    }
    else {
        if (variable1 == 1) {
            cout << "ingrese saldo en Tarjeta" << endl;
            cin >> SaldoP;
            ClienteConsola.set_SaldoTarj(SaldoP);

        }
        else {
            cout << "ingrese saldo en Mercado Pago" << endl;
            cin >> SaldoP;
            ClienteConsola.set_SaldoMP(SaldoP);
        }
    }
       

         vector<eArticulosLocal>ListaDeseo;
         cout << "ingrese alguno de esto articulos,una vez terminado escribir 99" << endl;
         cout << " Medicamentos=0, Vitaminas=1, Pastillas=3, Shampo=4, Desodorantes=5, Jabones=6, Cosmeticos=7, Cremas=8, Perfumes=9, Maquillajes=10, EsmalteUnias=11, VendaElasticas=12, Cabestrillos=13, Munequeras=14, MediasComprension=15, Tintura=16, MaquinaAfeitar=17, Esponja=18, ProtectorSolar=19, Repelente=20, Gel=21, Suplementos=23 " << endl;
   
         do
         {

             cin >> variable2;
             if (variable2 != 99) {
                 Respuesta = eArticulosLocal(variable2);

                 ListaDeseo.push_back(Respuesta);
                
             }


         } while (variable2  != 99);

        ManagerLuis.ReubicarCliente(ClienteConsola, ArticulosLocal, EmpOrtopJuan, EmpPerfPepe, FarmaJose);
        Ticket prueba1 = ManagerLuis.FacturaryGeneraTicket(ClienteConsola, LocalAzul);




        cout << "Precio Final:" << prueba1.get_PrecioFinal();
        cout << "\n Dni:" << prueba1.get_DNI() << endl;

        //metodo cobrar (Cajero)

        Factura facturaprueba = CajeroMateo.Cobrar(ClienteConsola, LocalAzul);

        ////voy a intentar hacer bloque try catch
        //try {
        //    Factura FacturaA = CajeroMateo.Cobrar(ClienteConsola, LocalAzul);
        //    Factura FacturaB = CajeroMateo.Cobrar(ClienteConsola, LocalAzul);
        //}
        //catch (exception* e)
        //{
        //    cout << "EXCEPTION" << e->what() << endl;
        //}

        //imprimo Factura para verificar
        cout << "Precio final:" << facturaprueba.get_MontoFinal();

        vector<Articulos>ListaArticulos;
        ListaArticulos = facturaprueba.get_ArtComprados();
        cout << "\n ListaArticulos es:" << endl;
        for (int i = 0; i < ListaArticulos.size(); i++)
        {
            cout << i + 1 << " -" << ListaArticulos[i].get_Precio() << endl;
        }
        cout << "\nNombre Cliente:" << facturaprueba.get_NombreCliente() << endl;





        return(0);
    }


//Funcion Para obtener primero en la cola
    Cliente PrimeroEnCola(queue<Cliente>cola)
    {
    Cliente Primero = cola.front();        //copio en auxiliar el primero de mi cola, para no perderlo
    cola.pop(); //pongo al segundo primero

    return Primero;
}
