#include "Quadrado.h"

Quadrado::Quadrado()
{

}

Quadrado::Quadrado(double lado)
{
    setLado(lado);
}

void Quadrado::setLado(double lado)
{
    this -> lado = lado;
}

double Quadrado::getLado()
{
    return lado;
}

double Quadrado::calcularArea()
{
    return lado*lado;
}

