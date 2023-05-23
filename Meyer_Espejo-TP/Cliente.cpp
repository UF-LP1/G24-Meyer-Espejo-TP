#include "Cliente.h"





//constructor
Cliente::Cliente(string Nombre, string Apellido, string DNI, unsigned int CodigoSeguridad, unsigned int NroTicket, enum eMetodoPago metodoAutilizar, string mail, float saldoef, double saldomp, double saaldotarj, string CUIL, bool facturafis, eNecesidad necesidad):CUIT(CUIL) {
	this->Nombre = Nombre;
	this->Apellido = Apellido;
	this->DNI = DNI;
	this->CodigoSeguridad = CodigoSeguridad;
	this->Mail = mail;
	this->NroTicket = NroTicket;
	this->miMetodoPago = metodoAutilizar;
	this->SaldoEf = saldoef;
	this->SaldoMP = saldomp;
	this->SaldoTarj = saaldotarj;
	this->FacturaFisica = facturafis;
	this->miNecesidad = necesidad;
	
	
}
Cliente::Cliente(string Nombre, string Apellido, string DNI, unsigned int CodigoSeguridad, unsigned int NroTicket, enum eMetodoPago metodoAutilizar, string mail, string CUIL, bool facturafis, eNecesidad necesidad) :CUIT(CUIL) {
	this->Nombre = Nombre;
	this->Apellido = Apellido;
	this->DNI = DNI;
	this->CodigoSeguridad = CodigoSeguridad;
	this->Mail = mail;
	this->NroTicket = NroTicket;
	this->miMetodoPago = metodoAutilizar;
	this->FacturaFisica = facturafis;
	this->miNecesidad = necesidad;


}
Cliente::Cliente(CarritoCompras carrito,string Nombre, string Apellido, string DNI, unsigned int CodigoSeguridad, unsigned int NroTicket, enum eMetodoPago metodoAutilizar, string mail, float saldoef, double saldomp, double saaldotarj, string CUIL, bool facturafis, eNecesidad necesidad) :CUIT(CUIL) {
	this->Nombre = Nombre;
	this->Apellido = Apellido;
	this->DNI = DNI;
	this->CodigoSeguridad = CodigoSeguridad;
	this->Mail = mail;
	this->NroTicket = NroTicket;
	this->miMetodoPago = metodoAutilizar;
	this->SaldoEf = saldoef;
	this->SaldoMP = saldomp;
	this->SaldoTarj = saaldotarj;
	this->FacturaFisica = facturafis;
	this->miNecesidad = necesidad;
	this->miCarrito = carrito;
}
//destructor
Cliente::~Cliente() {
}


////getters
string Cliente::get_Mail()
{
	return this->Mail;
}

string Cliente::get_DNI() {
	return this->DNI;
}

eMetodoPago Cliente:: get_miMetodoPago() {
	return this-> miMetodoPago;
}

unsigned int Cliente::get_CodigoSeguridad() {
	return this->CodigoSeguridad;
}

unsigned int Cliente::get_NroTicket() {
	return this-> NroTicket;
}

float Cliente::get_SaldoEf() {
	return this->SaldoEf;
}

string Cliente::get_CUIT() {
	return this->CUIT;
}
double Cliente::get_SaldoTarj() {
	return this->SaldoTarj;
}
double Cliente::get_SaldoMP() {
	return this->SaldoMP;
}

Receta Cliente::get_Receta() {
	return this-> miReceta;
}

enum eNecesidad Cliente::get_miNecesidad() {
	return this->miNecesidad;
}

bool Cliente::get_formato() {
	return this->FacturaFisica;
}

string Cliente::get_Nombre() {
	return this->Nombre;
}

string Cliente::get_Apellido() {
	return this->Apellido;
}


CarritoCompras Cliente:: get_Carrito()
{
	return this->miCarrito;
}

//setters
void Cliente::set_CodigoSeguridad(unsigned int codigoSeguridad) {
	this->CodigoSeguridad = codigoSeguridad;
}

void Cliente::set_Ticket(Ticket auxi) {
	this->miTicket = auxi;
}

void Cliente::set_Factura(Factura aux) {
	this->miFactura = aux;
}

void Cliente:: set_Carrito(CarritoCompras auxi)
{
	this->miCarrito = auxi;
}
vector<eArticulosLocal> Cliente::get_ProductosQuiero() {
	return this->ProductosQuiero;

}

Ticket Cliente::get_Ticket()
{
	return this->miTicket;
}

void Cliente:: Actualizar_Nro(AsistAutomatico MiAsistAutomatico) {//funcion entre cliente y asist automatico
	int Nuevo_Numero = 0;//creo una variable para que no haya poroblemas
	Nuevo_Numero = MiAsistAutomatico.get_NroTurno();//copio el numero de turno a la variable creada

	this->NroTicket = Nuevo_Numero;
	//guardo el numero que le da el asist automatico y lo copio en cliente asi el cliente puede ser identificado por su numero

}
void Cliente::set_SaldoEf(float _SaldoEf) {
	this->SaldoEf = _SaldoEf;
}
void Cliente:: set_SaldoTarj(double _SaldoTarj) {
	this->SaldoTarj = _SaldoTarj;
}
void Cliente::set_SaldoMP(double _SaldoMP) {
	this->SaldoMP = _SaldoMP;
		
}

Cliente& Cliente::operator=(const Cliente& cliente)  //lo hacemos para poder usarlo en el main para probar las funciones
{
	if (&cliente != this)
	{
		Nombre = cliente.Nombre;
		Apellido = cliente.Apellido;
		DNI=cliente.DNI;
		CodigoSeguridad=cliente.CodigoSeguridad;
		Mail=cliente.Mail;
		NroTicket=cliente.NroTicket;
		miMetodoPago=cliente.miMetodoPago;
		SaldoEf=cliente.SaldoEf;
		SaldoMP=cliente.SaldoMP;
		SaldoTarj=cliente.SaldoTarj;
		miReceta=cliente.miReceta;
		//const string CUIT;
		miTicket=cliente.miTicket;
		FacturaFisica=cliente.FacturaFisica;
		miFactura=cliente.miFactura;
		miNecesidad=cliente.miNecesidad;
		miCarrito=cliente.miCarrito;
		ProductosQuiero=cliente.ProductosQuiero;
		
	}
	return* this;
}