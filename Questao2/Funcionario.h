#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

using namespace std;


class Funcionario
{
    private:
        string matricula;
        string nome;
        float salario;

    public:
        Funcionario();
        Funcionario(string, string, float);

        void setMatricula(string);
        void setNome(string);
        void setSalario(float);

        string getMatricula();
        string getNome();
        virtual float getSalario();

};

#endif
