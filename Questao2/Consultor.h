#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"


class Consultor: public Funcionario
{
    public:
        Consultor();
        Consultor(string,string,double,double);
        double getSalario();
        double getSalario(double);
};

#endif
