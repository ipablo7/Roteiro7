#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"

class Quadrado: public FiguraGeometrica
{
    private:
        float base, altura;

    public:

        Quadrado();

        virtual ~Quadrado();
        float calcularArea();
        void setBase(float);
        void setAltura(float);
};

#endif
