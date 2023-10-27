#include "Gestor.hpp"
#include "Pedido.hpp"
#include <random>
using namespace std;

void Gestor::genera12Pedidos (){
    //int n = 12;
    //int a[n];
    for(int i = 0; i <= 12; i++){
        Pedido* v = new Pedido();
        v->mostrar();
    }
        cout << endl;
}




//if (clase = 0){     / 0:urgente 1:estandar }*/
        