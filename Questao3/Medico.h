#ifndef MEDICO_H
#define MEDICO_H
#include <string>
#include <iostream>

using namespace std;

class Medico
{
    public:
        Medico();
        virtual ~Medico();
        void setNome(string n);
        void setAltura(float);
        void setPeso(float);
        string getNome();
        float getAltura();
        float getPeso();
        virtual void fazTrabalho();
    private:
        string nome;
        float altura, peso;
};

#endif // MEDICO_H
