#include "Empresa.h"

Empresa::Empresa()
{

}

void Empresa::setFuncionario()
{
    static double sal;
    string name, matric;

    cout << "**** FUNCIONARIO ****" << endl;
    cout << "Informe o nome: ";
    cin >> name;
    func.setNome(name);

    cout << "Informe a matricula: ";
    cin >> matric;
    func.setMatricula(matric);

    cout << "Informe o salario: ";
    cin >> sal;
    func.setSalario(sal);

}

void Empresa::setConsultor()
{
    double sal;
    string name, matric;

    cout << endl << "**** CONSULTOR ****" << endl;
    cout << "Informe o nome: ";
    cin >> name;
    consult.setNome(name);

    cout << "Informe a matricula: ";
    cin >> matric;
    consult.setMatricula(matric);

    cout << "Informe o salario: ";
    cin >> sal;
    consult.setSalario(sal);

}

void Empresa::mostrarSalario()
{
    double percent;

    percent = 0.0;

    cout << "Informe o valor do percentual a ser acrescido: ";
    cin >> percent;
    cout << "Salario com um aumento de " << percent << "% " << "eh = " << consult.getSalario(percent);
    cout << endl;

    cout << "Salario com um aumento de 10% = " << consult.getSalario(percent);
    consult.getSalario();

}
