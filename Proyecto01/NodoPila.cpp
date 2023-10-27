#include "NodoPila.hpp"

NodoPila::NodoPila(Pedido* v,NodoPila* sig){
    valor = v;
    siguiente = sig;
}
NodoPila:: ~NodoPila(){
    
}