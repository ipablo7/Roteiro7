#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"

class Quadrado: public FiguraGeometrica
{
    private:
       double lado;

    public:

        Quadrado();
        Quadrado(double);

        void setLado(double);
        double getLado();
        double calcularArea();

};

#endif
