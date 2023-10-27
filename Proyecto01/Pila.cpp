#include "Pila.hpp"
#include "Pedido.hpp"
using namespace std;

Pila::Pila(){
    ultimo = NULL;
    longitud = 0;
}
void Pila::insertar(Pedido* v){
    pnodoPila nuevo;
    nuevo = new NodoPila(v,ultimo);
    ultimo = nuevo;
    longitud++;
}
Pedido* Pila::extraer(){
    pnodoPila nodo;
    Pedido* v;
    nodo = ultimo;
    ultimo = nodo->siguiente;
    v = nodo->valor;
    longitud--;
    delete nodo;
    return v;
}
Pedido* Pila::cima(){
    return ultimo->valor;
}
void Pila::mostrar(){
    pnodoPila aux = ultimo;
    //cout<<"\tEl contenido de la pila es: ";
    while(aux){
        Pedido* v = aux->valor;
        v-> mostrar();
        aux = aux->siguiente;
    }
    cout<<endl;
}
int Pila::getLongitud(){
    return this->longitud;
    
}
Pila::~Pila(){
    pnodoPila aux;
    while(ultimo){
        aux = ultimo;
        ultimo = ultimo->siguiente;
        delete aux;
    }
}

