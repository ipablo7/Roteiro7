#include "Funcionario.h"
#include "Consultor.h"
#include "Empresa.h"

#include <iostream>

using namespace std;

int main()
{
    Empresa empresa;

    empresa.setFuncionario();
    empresa.setConsultor();
    empresa.mostrarSalario();

    return 0;
}
