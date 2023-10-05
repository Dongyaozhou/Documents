#ifndef PERSONA_HPP
#define PERSONA_HPP
#include <iostream>
using namespace std;

class Persona
{
public:
    Persona(int edad);
    int getEdad();
    bool esMujer();
    void setEdad(int edad);
    void mostrar();
    ~Persona();
private:
    bool generos;// 1-Mujer, 0-Hombre
    int edad;
    char dni[10];
    

};

#endif // PERSONA_HPP
