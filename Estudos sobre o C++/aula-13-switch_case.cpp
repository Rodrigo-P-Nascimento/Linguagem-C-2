#include <iostream>

using namespace std;

int main(void){

    int valor;
    //Eh possivel fazer switches cases aninhados

    cout << "Digite um valor de dentro da tabela ou fora\n";
    cout <<"Tabela [ 1 - 2 - 3 - 4 - 5 ]\n";
    cin >> valor;

    switch (valor){

        case 1:
            cout << "Voce digitou o valor 1";
            break;
        case 2:
            cout << "Voce digitou o valor 2";
            break;
        case 3:
            cout << "Voce digitou o valor 3";
            break;
        case 4:
            cout << "Voce digitou o valor 4";
            break;
        case 5:
            cout << "Voce digitou o valor 5";
            break;
        default:
            cout << "Voce digitou um valor de fora da tabela";
    }



    return 0;
}
