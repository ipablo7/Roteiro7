#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"

class Circulo: public FiguraGeometrica
{
    private:
        float raio;

    public:
        Circulo();
        Circulo(double);

        double getRaio();
        void setRaio(double);
        double calcularArea();

};

#endif
