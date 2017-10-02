#include "Trabalhador.h"

Trabalhador::Trabalhador()
{

}

void Trabalhador::setNome(string nome)
{
    this -> nome = nome;
}

string Trabalhador::getNome()
{
    return nome;
}

void Trabalhador::setSalario(double salario)
{
    this -> salario = salario;
}

double Trabalhador::getSalario()
{
    return salario;
}

