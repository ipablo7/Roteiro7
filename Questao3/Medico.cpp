#include "Medico.h"

Medico::Medico()
{
    //ctor
}

Medico::~Medico()
{
    //dtor
}

void Medico::setNome(string n){
    nome = n;
}

void Medico::setAltura(float a){
    altura = a;
}

void Medico::setPeso(float p){
    peso = p;
}

string Medico::getNome(){
    return nome;
}

float Medico::getAltura(){
    return altura;
}

float Medico::getPeso(){
    return peso;
}

void Medico::fazTrabalho(){
    cout << "Trabalhando..." << endl;
}
