#include "Ginecologista.h"

Ginecologista::Ginecologista()
{
    //ctor
}

Ginecologista::~Ginecologista()
{
    //dtor
}

void Ginecologista::fazTrabalho(){
    cout << "Realizando exame ginecologico" << endl;
}
void Ginecologista::setEspecializacao(string esp){
    especializacao = esp;
}
string Ginecologista::getEspecializacao(){
    return especializacao;
}
