
#include "CarritoCompras.h"
#include <vector>
#include "Articulos.h"

//act
CarritoCompras::CarritoCompras(float MontoTotal, unsigned int Nro) : Nro(Nro) {
    this->MontoTotal = MontoTotal;
}

CarritoCompras::~CarritoCompras() {}



float CarritoCompras::CalcMontoTotal(Articulos ListaPedido) {
    float monto = 0;
    int Tamanio = 0;
    Tamanio = ListaPedido.size();
    for (int i = 0; i < Tamanio; i++) {
        monto = monto + ListaPedido*[i].Precio;
    }

    return(monto);

}


//void CarritoCompras::set_MontoTotal(float montoTotal) {
//    this->MontoTotal = montoTotal;
//}

float CarritoCompras::get_MontoTotal() {
    return this->MontoTotal;
}

bool CarritoCompras::AgregarArticulos(Articulos miArticulo, Articulos ListaArticulos, Articulos ListaPedido)
{   //se crearia la listapedido aca
    unsigned int code = 0;
    int x;//seria el valor del atributo del codigo de c/objeto
code = rand() % 100;
vector <Articulos> ListaPedido;
if (code == x) {
    
        ListaPedido.push_back(miArticulo);
}


}

//const unsigned int CarritoCompras::get_Nro() {
//    return this->Nro;
//}*/

