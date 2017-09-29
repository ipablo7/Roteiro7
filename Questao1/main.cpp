#include "FiguraGeometrica.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{

    int opcao;
    double aux, aux2;

    Quadrado *quadrado = new Quadrado;
    Circulo *circulo = new Circulo;
    Triangulo *triangulo = new Triangulo;

    while(1)
    {
        cout << endl << "Informe a opcao da figura geometrica a ser escolhida: " << endl;
        cout << "1 - \tQUADRADO" << endl;
        cout << "2 - \tCIRCULO" << endl;
        cout << "3 - \tTRIANGULO" << endl;
        cout << "4 - \t SAIR" << endl;
        cin >> opcao;

        switch(opcao)
        {
            case 1:
                cout << "Informe o lado: ";
                cin >> aux;
                quadrado->setLado(aux);

                quadrado->setNome("Quadrado");

                cout << "Area do " << quadrado->getNome() << " eh = " << quadrado->calcularArea() << endl;
                break;

            case 2:
                cout << "Informe o raio: ";
                cin >> aux;
                circulo->setRaio(aux);

                quadrado->setNome("Circulo");

                cout << "Area do " << circulo->getNome() << " eh = " << circulo->calcularArea() << endl;
                break;

            case 3:
                cout << "Informe o base: ";
                cin >> aux;
                triangulo->setBase(aux);

                cout << "Informe a altura: ";
                cin >> aux2;
                triangulo->setAltura(aux2);

                circulo->setNome("Triangulo");
                cout << "Area do " << triangulo->getNome() << " eh = " << triangulo->calcularArea() << endl;
                break;

            case 4:
                break;

        }
        if(opcao == 4)
            break;
    }




    return 0;
}
