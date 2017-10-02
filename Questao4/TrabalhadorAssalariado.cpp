#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado()
{

}


TrabalhadorAssalariado::TrabalhadorAssalariado(string nome, double salario)
{
    setNome(nome);
    setSalario(salario);
}

double TrabalhadorAssalariado::calcularPagamento()
{
    double salarioSemanal;

    salarioSemanal = getSalario() / 4;

    return salarioSemanal;
}
