#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>
#define PI 3.1415

using namespace std;

class FiguraGeometrica
{
    private:
        string nome;

    public:
        FiguraGeometrica();

        void setNome(string);
        string getNome();
        virtual double calcularArea();
};

#endif
