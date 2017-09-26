#include "Triangulo.h"

Triangulo::Triangulo() : FiguraGeometrica()
{

}

float Triangulo::calcularArea()
{
    return base*altura;
}

void Triangulo::setBase(float base)
{
    this -> base = base;
}

void Triangulo::setAltura(float altura)
{
    this -> altura = altura;
}

Triangulo::~Triangulo()
{

}
