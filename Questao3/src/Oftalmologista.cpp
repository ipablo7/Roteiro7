#include "Oftalmologista.h"

Oftalmologista::Oftalmologista()
{
    //ctor
}

Oftalmologista::~Oftalmologista()
{
    //dtor
}

void Oftalmologista::fazTrabalho(){
    cout << "Realizando exame oftalmologico" << endl;
}

void Oftalmologista::setEspecializacao(string esp){
    especializacao = esp;
}
string Oftalmologista::getEspecializacao(){
    return especializacao;
}
