/**
 * Project Untitled
 */


#ifndef _CARRITOCOMPRAS_H
#define _CARRITOCOMPRAS_H

class CarritoCompras {
public: 
    
/**
 * @param float
 * @param unsigned int
 */
void CarritoCompras(void float, void unsigned int);
    
/**
 * @param miPerfumeria
 * @param miGolosina
 * @param miOrtopedia
 * @param miFarmacia
 */
float CalcMontoTotal(Perfumeria miPerfumeria, Golosina miGolosina, Ortopedia miOrtopedia, Farmacia miFarmacia);
    
/**
 * @param float MontoTotal
 */
float set MontoTotal(void float MontoTotal);
    
float get MontoTotal();
    
void Operation1();
    
/**
 * @param miArticulos
 */
bool AgregarArticulos(Articulos miArticulos);
    
const unsigned int get Nro();
protected: 
    
void CarritoCompras();
private: 
    float MontoTotal;
    const unsigned int Nro;
};

#endif //_CARRITOCOMPRAS_H