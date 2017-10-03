#include "Hospital.h"

using namespace std;

Hospital::Hospital()
{
    //ctor
}

Hospital::~Hospital()
{
    //dtor
}

void Hospital::exibeMedicos(){
    float altura, peso;
    string nome, especializacao;

    cout << "Nome do medico: ";
    cin >> nome;
    cout << "Insira a altura:";
    cin >> altura;
    cout << "Insira o peso: ";
    cin >> peso;
    cout << "Insira a especializacao: ";
    cin >> especializacao;
    if(especializacao.compare("Cirurgiao") == 0){
        cir.setEspecializacao(especializacao);
        cir.setAltura(altura);
        cir.setPeso(peso);
        cir.setNome(nome);
        cout << "Nome do medico: " << cir.getNome() << endl;
        cout << "Especializacao do medico: " << cir.getEspecializacao() << endl;
        cout << "Altura do medico: " << cir.getAltura() << endl;
        cout << "Peso do medico: " << cir.getPeso() << endl;
        cir.fazTrabalho();
    }
    if(especializacao.compare("Ginecologista") == 0){
        gin.setEspecializacao(especializacao);
        gin.setAltura(altura);
        gin.setPeso(peso);
        gin.setNome(nome);
        cout << "Nome do medico: " << gin.getNome() << endl;
        cout << "Especializacao do medico: " << gin.getEspecializacao() << endl;
        cout << "Altura do medico: " << gin.getAltura() << endl;
        cout << "Peso do medico: " << gin.getPeso() << endl;
        gin.fazTrabalho();
    }
    if(especializacao.compare("Oftalmologista") == 0){
        oftal.setEspecializacao(especializacao);
        oftal.setAltura(altura);
        oftal.setPeso(peso);
        oftal.setNome(nome);
        cout << "Nome do medico: " << oftal.getNome() << endl;
        cout << "Especializacao do medico: " << oftal.getEspecializacao() << endl;
        cout << "Altura do medico: " << oftal.getAltura() << endl;
        cout << "Peso do medico: " << oftal.getPeso() << endl;
        oftal.fazTrabalho();
    }
    if(especializacao.compare("Otorrino") == 0){
        otorrino.setEspecializacao(especializacao);
        otorrino.setAltura(altura);
        otorrino.setPeso(peso);
        otorrino.setNome(nome);
        cout << "Nome do medico: " << otorrino.getNome() << endl;
        cout << "Especializacao do medico: " << otorrino.getEspecializacao() << endl;
        cout << "Altura do medico: " << otorrino.getAltura() << endl;
        cout << "Peso do medico: " << otorrino.getPeso() << endl;
        otorrino.fazTrabalho();
    }

}
