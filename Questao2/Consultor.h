#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"


class Consultor: public Funcionario
{
    public:
        Consultor();

        double getSalario();
        double getSalario(double);

};

#endif
