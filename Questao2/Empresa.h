#ifndef EMPRESA_H
#define EMPRESA_H
#include "Funcionario.h"
#include "Consultor.h"
#include <iostream>

using namespace std;

class Empresa
{
    private:
        Funcionario func;
        Consultor consult;

    public:
        Empresa();
        Empresa(Funcionario, Consultor);

        void setFuncionario();
        void setConsultor();
        void mostrarSalario();

};

#endif
