#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"


class TrabalhadorPorHora : public Trabalhador
{
    public:
        TrabalhadorPorHora();
        TrabalhadorPorHora(string,double);

        double calcularPagamento(int);


};

#endif
