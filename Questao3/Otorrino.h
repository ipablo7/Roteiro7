#ifndef OTORRINO_H
#define OTORRINO_H
#include "Medico.h"

using namespace std;

class Otorrino : public Medico
{
    public:
        Otorrino();
        virtual ~Otorrino();
        void setEspecializacao(string);
        string getEspecializacao();
        void fazTrabalho();
    private:
        string especializacao;
};

#endif // OTORRINO_H
