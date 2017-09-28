#include "Funcionario.h"

Funcionario::Funcionario()
{

}

Funcionario::Funcionario(string matricula, string nome, float salario)
{
    setMatricula(matricula);
    setNome(nome);
    setSalario(salario);
}

void Funcionario::setMatricula(string matricula)
{
    this -> matricula = matricula;
}

void Funcionario::setNome(string nome)
{
    this -> nome = nome;
}

void Funcionario::setSalario(float salario)
{
    this -> salario = salario;
}

string Funcionario::getMatricula()
{
    return matricula;
}
string Funcionario::getNome()
{
    return nome;
}

float Funcionario::getSalario()
{
    return salario;
}
