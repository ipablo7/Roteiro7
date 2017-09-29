#include "Consultor.h"


using namespace std;

Consultor::Consultor()
{

}

Consultor::Consultor(string matricula, string nome, double salario, double percentual)
{
    setMatricula(matricula);
    setNome(nome);
    setSalario(salario);
    percentual = 0.0;
}

double Consultor::getSalario(double percentual)
{
    double sal;

    sal = getSalario();

    return sal + (sal * (percentual/100));
}

double Consultor::getSalario()
{
    return getSalario() * 0.1 + getSalario();
}


