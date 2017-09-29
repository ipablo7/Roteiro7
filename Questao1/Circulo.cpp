#include "Circulo.h"

Circulo::Circulo()
{

}

Circulo::Circulo(double raio)
{
    setRaio(raio);
}

void Circulo::setRaio(double raio)
{
    this -> raio = raio;
}

double Circulo::getRaio()
{
    return raio;
}

double Circulo::calcularArea()
{
    return PI*raio*raio;
}
