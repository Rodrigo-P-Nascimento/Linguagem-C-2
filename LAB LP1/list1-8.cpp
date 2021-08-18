#include <iostream>
#include <cmath>

using namespace std;
/*
(Fácil) Ler dois valores numéricos inteiros (representados pelas variáveis A e B) e apresentar o resultado do quadrado da diferença do primeiro valor (variável A) pelo segundo valor (variável B).
*/

int main(){

    int A, B;

    cout << "Digite os valores de A e B: ";
    cin >> A >> B;

    cout << "Resultado: " << pow(A-B, 2) << endl;

    return 0;
}