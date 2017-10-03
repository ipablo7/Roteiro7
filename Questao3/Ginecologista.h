#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H
#include "Medico.h"

using namespace std;

class Ginecologista : public Medico
{
    public:
        Ginecologista();
        virtual ~Ginecologista();
        void setEspecializacao(string);
        string getEspecializacao();
        void fazTrabalho();
    private:
        string especializacao;
};

#endif // GINECOLOGISTA_H
