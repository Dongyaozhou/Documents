#include "Persona.hpp"

Persona::Persona(int edad)
{
    this -> edad = edad;
}
void Persona::setEdad(int edad)
{
    this-> edad=edad;
}
int Persona::getEdad()
{
    return this->edad;
}
Persona::~Persona()
{
}

