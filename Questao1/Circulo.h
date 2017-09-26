#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"

class Circulo: public FiguraGeometrica
{
    private:
        float raio;

    public:
        Circulo();

        virtual ~Circulo();
        float calcularArea();
        void setRaio(float);


};

#endif
