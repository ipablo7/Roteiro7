#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"
#include <iostream>

using namespace std;

int main()
{
    TrabalhadorAssalariado trabalhadorAss;
    TrabalhadorPorHora trabalhadorhora;

    string nome;
    double sal;
    int hora;

    cout << "Informe o nome do trabalhador assalariado: ";
    cin >> nome;
    trabalhadorAss.setNome(nome);

    cout << "Informe o salario bruto do trabalhador assalariado: ";
    cin >> sal;
    trabalhadorAss.setSalario(sal);

    cout << "O salario liquido de " << trabalhadorAss.getNome() << " eh = " << trabalhadorAss.calcularPagamento();
    cout << endl << endl;

    //******************************************************

    cout << "Informe o nome do trabalhador que recebe por hora: ";
    cin >> nome;
    trabalhadorhora.setNome(nome);

    cout << "Informe o salario bruto do trabalhador assalariado: ";
    cin >> sal;
    trabalhadorhora.setSalario(sal);

    cout << "Informe o numero de horas que trabalhou: ";
    cin >> hora;

    cout << "O salario liquido de " << trabalhadorhora.getNome() << " eh = " << trabalhadorhora.calcularPagamento(hora);
    cout << endl << endl;

    return 0;
}
