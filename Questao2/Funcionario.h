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
        Funcionario(string, string, double);

        void setMatricula(string);
        void setNome(string);
        void setSalario(double);

        string getMatricula();
        string getNome();
        double virtual getSalario();

};

#endif
