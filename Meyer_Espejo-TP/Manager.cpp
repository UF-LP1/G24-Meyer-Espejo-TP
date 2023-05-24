#include "Manager.h"

Manager::Manager(string nombre, string apellido, float sueldo) :Empleado(nombre, apellido, sueldo) {

}

Manager:: ~Manager() {}

Ticket Manager::FacturaryGeneraTicket(Cliente& miCliente,Local& miLocal){
    float preciofinal = ActualizarPrecio(miCliente.get_Receta(),miCliente.get_Carrito());
    Ticket miTicket(false, preciofinal, miCliente.get_DNI(), miCliente.get_miMetodoPago(), miCliente.get_CUIT());
    miCliente.set_Ticket(miTicket);
    miLocal.AgregarTicket(miTicket); //loagrego al registro del local a ese ticket que se emitio
    return miTicket;

}

float Manager::CalculaDescuento(Receta miReceta) {

    float discount = 0; //si es otra no tiene descuento, por eso inicializo en 0

    if (miReceta.get_obrasocial() == OSDE)
        discount = 0.3;
    if (miReceta.get_obrasocial() == SwissMedical)
        discount = 0.2;
    if (miReceta.get_obrasocial() == GALENO || miReceta.get_obrasocial() == MEDICUS)
        discount = 0.1;

    return discount;
}

float Manager::ActualizarPrecio(Receta miReceta, CarritoCompras miCarrito)
{
    float aux = 0;
    float descuentoAaplicar;
    descuentoAaplicar = CalculaDescuento(miReceta);
    aux = miCarrito.get_MontoTotal()- (miCarrito.get_MontoTotal()*descuentoAaplicar);
    return aux;
}

void Manager::ReubicarCliente(Cliente ClienteIngresante,vector<Articulos*>ListaArticulosLocal, EmpleadoOrtopedia EmpOrtop, EmpleadoPerfumeria EmpPerf, Farmaceutico Farmaceutico) {
    
 
    if (ClienteIngresante.get_miNecesidad() == 1) //perfumeria
       EmpPerf.revisionperf(&ClienteIngresante,ListaArticulosLocal); //derivo a Empleado de Perfumeria
        
    if(ClienteIngresante.get_miNecesidad() == ArtOrtopedia)
       EmpOrtop.revisionort(ClienteIngresante,ListaArticulosLocal);//derivo a Empleado de Ortopedia

    if (ClienteIngresante.get_miNecesidad() == 0)
       Farmaceutico.revisionMed(ClienteIngresante,ListaArticulosLocal); //derivo a Farmaceutico
    
}