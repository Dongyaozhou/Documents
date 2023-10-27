#include "NodoCola.hpp"

NodoCola::NodoCola(Pedido* v, NodoCola* sig){
    valor = v;
    siguiente = sig;
}

NodoCola::~NodoCola(){
    
}