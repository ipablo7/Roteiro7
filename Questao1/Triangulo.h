#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"

class Triangulo: public FiguraGeometrica
{
    private:

        float base, altura;
    public:

        Triangulo();

        virtual ~Triangulo();

        float calcularArea();
        void setBase(float);
        void setAltura(float);
};

#endif

