#include <iostream>
#include <iomanip>

using namespace std;

/*
4(Médio) Ler dois valores A e B e efetuar a troca dos valores de forma que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Apresentar os valores após a efetivação do processamento da troca.
*/

int main(){

    int A, B, aux;


    cout << "Digite os valores de A e B: ";
    cin >> A >> B;

    aux = A;
    A = B;
    B = aux;

    cout << "Valores trocados de A e B: " << A << " - " << B << endl;

    return 0;
}