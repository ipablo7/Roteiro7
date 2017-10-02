#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora()
{

}

TrabalhadorPorHora::TrabalhadorPorHora(string nome, double salario)
{
    setNome(nome);
    setSalario(salario);
}

double TrabalhadorPorHora::calcularPagamento(int horas)
{
    double salarioSemanal;
    double precoHora;
    int horaExtra = horas - 40;


    salarioSemanal = getSalario() /4;
    precoHora = salarioSemanal / horas;

    double precoHoraExtra = (3*precoHora)/2;

    if(horas > 40)
        salarioSemanal += horaExtra * precoHoraExtra;


    return salarioSemanal;

}

