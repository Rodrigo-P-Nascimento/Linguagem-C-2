#include <iostream>

using namespace std;
/*
(Fácil) Elaborar um programa que calcule e apresente o valor do volume de uma caixa retangular, utilizando a fórmula VOLUME ← COMPRIMENTO * LARGURA * ALTURA
*/

int main(){

    float compr, lar, alt;

    cout << "Nos informe os lados da caixa: ";
    cin >> compr >> lar >> alt;

    cout << "VOLUME: " << compr * lar * alt << endl;

    return 0;
}