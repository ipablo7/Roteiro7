#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"


class Consultor: public Funcionario
{
    public:
        float getSalario();
        float getSalario(float);

};

#endif
