#include "Otorrino.h"

Otorrino::Otorrino()
{
    //ctor
}

Otorrino::~Otorrino()
{
    //dtor
}

void Otorrino::fazTrabalho(){
    cout << "Examinando o ouvido..." << endl;
}

void Otorrino::setEspecializacao(string esp){
    especializacao = esp;
}
string Otorrino::getEspecializacao(){
    return especializacao;
}
