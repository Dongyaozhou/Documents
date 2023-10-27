#ifndef PILA_HPP
#define PILA_HPP
#include <iostream>
#include "NodoPila.hpp"
#include "Pedido.hpp"

class Pila{
public:
    Pila();
    ~Pila();
    void insertar(Pedido* v);
    Pedido* extraer();
    Pedido* cima();
    void mostrar();
    int getLongitud();
    
private:
    pnodoPila ultimo;
    int longitud;
};

#endif //PILA