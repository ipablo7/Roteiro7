#include "Circulo.h"

Circulo::Circulo() : FiguraGeometrica()
{

}

float Circulo::calcularArea()
{
    return PI*raio*raio;
}

void Circulo::setRaio(float raio)
{
    this -> raio = raio;
}

Circulo::~Circulo()
{

}
