#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
/*
(Fácil) Elaborar um programa que calcule e apresente o valor do volume de uma esfera. Utilize a fórmula 
VOLUME ← (4/3) * PI * RAIO3
*/

int main(){

    float volume, raio;

    cout << "Digite o valor do raio da esfera: ";
    cin >> raio;

    volume = (4/3) * 3.14 * pow(raio, 3);

    cout << "Volume da esfera eh " << volume << endl;

    return 0;
}




