#include "Cirurgiao.h"

Cirurgiao::Cirurgiao()
{
    //ctor
}

Cirurgiao::~Cirurgiao()
{
    //dtor
}

void Cirurgiao::fazTrabalho(){
    cout << "Realizando cirurgia..." << endl;
}

void Cirurgiao::setEspecializacao(string esp){
    especializacao = esp;
}
string Cirurgiao::getEspecializacao(){
    return especializacao;
}
