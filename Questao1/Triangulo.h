#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"

class Triangulo: public FiguraGeometrica
{
    private:

        double base, altura;
    public:

        Triangulo();
        Triangulo(double,double);

        void setBase(double);
        void setAltura(double);
        double getBase();
        double getAltura();
        double calcularArea();
};

#endif

