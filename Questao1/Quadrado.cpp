#include "Quadrado.h"

Quadrado::Quadrado() : FiguraGeometrica()
{

}

float Quadrado::calcularArea()
{
    return base*altura;
}

void Quadrado::setBase(float base)
{
    this -> base = base;
}

void Quadrado::setAltura(float altura)
{
    this -> altura = altura;
}

Quadrado::~Quadrado()
{

}
