#include <iostream>
#include <cmath>

using namespace std;

/*
(Difícil) Fazer um programa para:
a) Ler dois reais X e Y no intervalo [-1, 1] (-1 e 1 estão incluídos no intervalo) com Y diferente de 0 e
um valor inteiro N tal que 5 < N ≤ 20;
b) Calcular o valor de S dado por:

*/

int main(){

    float numX, numY, soma=0;
    int numN, i, j;

    cout << "Digite o valor de X e de Y, shao numeros reais" << endl;

    cin >> numX >> numY;
    cin >> numN;

    j= numN;
    for (i = 1; i <= numN; i++){
        soma += (pow(numX, i)) / (pow(numY, j));
        j--;
    }
    
    cout << "Somatorio total dos numeros no intevalo [-1, 1] eh: " << soma << endl;

    return 0;
}