#ifndef PEDIDO_HPP
#define PEDIDO_HPP
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

class Pedido{
public:
    Pedido();
    int getOrden();
    bool esEstandar();
    void setOrden();
    void mostrar();
    ~Pedido();
private:
    bool clase;
    int orden;
    char DNI[10];
    
    void generarDNI();
};
//problema
#endif //PEDIDO_HPP
