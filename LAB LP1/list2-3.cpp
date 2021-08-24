#include <iostream>
#include <iomanip>

using namespace std;

/*
(Médio) Fazer um programa para calcular e escrever a seguinte soma:
*/

int main(){

    int num1=37, num2=38, num3=1, i;
    float soma=0;

    for(i=37; i > 0; i--){
        soma += (num1*num2) / num3;
        num1--;
        num2--;
        num3++;
    }
    
    cout << fixed << setprecision(2);
    cout << "Soma final: " << soma << endl;

    return 0;
}