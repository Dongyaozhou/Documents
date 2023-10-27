#include "Pedido.hpp"
#include "Pila.cpp"

Pedido::Pedido(){
    
    //this->orden = orden;
    this->clase = (rand() % 2);
    this->generarDNI();
}
int Pedido::getOrden(){
    return this->orden;
}
bool Pedido::esEstandar(){
    return this->clase;    //1:Estandar, 0:Urgente
}
/*void Pedido::setOrden(){
    this->orden = orden;
}*/

void Pedido::mostrar(){
    string tipo = "urgente";
    if(clase)
        tipo = "estandar";
    cout << "\t"<<"El pedido a nombre del titular" << setw(10) <<" con DNI " <<DNI<<" es de caracter "<< tipo <<endl;
}
void Pedido::generarDNI(){
    char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
    int numDNI = 0, aux = 1E7;
    for(int i=0; i < 8; i++){
        int num = rand() % 10;
        this->DNI[i] = '0' + num;
        numDNI = numDNI + num * aux;
        aux /= 10;
    }
    this->DNI[8] = letras[numDNI %23];
    this->DNI[9] = '\0';
}
Pedido::~Pedido(){
    
}
