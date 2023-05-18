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
    aux = miCarrito.get_MontoTotal() - descuentoAaplicar;
    return aux;
}

Cliente Manager::ReubicarCliente(Local miLocal, EmpleadoOrtopedia EmpOrtop, EmpleadoPerfumeria EmpPerf, Farmaceutico Farmaceutico) {
    Cliente ClienteIngresante = miLocal.PrimeroEnCola(); //me traigo el que le tocaba (primero en cola)
    
    if (ClienteIngresante.get_miNecesidad() == Perfumeria)
        EmpPerf.revisionperf(ClienteIngresante); //derivo a Empleado de Perfumeria
        
    if(ClienteIngresante.get_miNecesidad() == Ortopedia)
        EmpOrtop.revisionort(ClienteIngresante);//derivo a Empleado de Ortopedia

    else //Farmacia
        Farmaceutico.revisionMed(ClienteIngresante); //derivo a Farmaceutico
    
}