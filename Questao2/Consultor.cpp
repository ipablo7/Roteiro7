#include "Consultor.h"


using namespace std;

Consultor::Consultor()
{

}

double Consultor::getSalario(double percentual)
{
    double sal;

    sal = Funcionario::getSalario();

    return sal + (sal * (percentual/100));
}

double Consultor::getSalario()
{
    return (Funcionario::getSalario() * 0.1) + Funcionario::getSalario();
}


