#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"


class TrabalhadorAssalariado : public Trabalhador
{
    public:
        TrabalhadorAssalariado();
        TrabalhadorAssalariado(string, double);

        double calcularPagamento();



};

#endif
