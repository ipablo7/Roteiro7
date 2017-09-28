#include "Consultor.h"
#include "Funcionario.h"

double Consultor::getSalario(float percentual)
{
    float sal;
    sal = getSalario();

    return sal * (percentual/100);
}

double Consultor::getSalario()
{
    return (getSalario() * 0.1);
}
