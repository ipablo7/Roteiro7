#include "Triangulo.h"

Triangulo::Triangulo() : FiguraGeometrica()
{

}

void Triangulo::setBase(double base)
{
    this -> base = base;
}

void Triangulo::setAltura(double altura)
{
    this -> altura = altura;
}

double Triangulo::getAltura()
{
    return altura;
}

double Triangulo::getBase()
{
    return base;
}

double Triangulo::calcularArea()
{
    return (base*altura) / 2;
}
