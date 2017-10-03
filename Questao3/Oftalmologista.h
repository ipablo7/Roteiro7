#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H
#include "Medico.h"

using namespace std;

class Oftalmologista : public Medico
{
    public:
        Oftalmologista();
        virtual ~Oftalmologista();
        void setEspecializacao(string);
        string getEspecializacao();
        void fazTrabalho();
    private:
        string especializacao;
};

#endif // OFTALMOLOGISTA_H
