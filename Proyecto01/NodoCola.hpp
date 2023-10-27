#ifndef NODOCOLA_HPP
#define NODOCOLA_HPP
#include <iostream>
#include <Pedido.hpp>
using namespace std;

class NodoCola{
public:
    NodoCola(Pedido* v, NodoCola* sig = NULL);
    ~NodoCola();
private:
    Pedido* valor;
    NodoCola* siguiente;
    friend class Cola;
};
typedef NodoCola* pnodoCola;

#endif //NODOCOLA