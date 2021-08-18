#include <iostream>
#include <iomanip>

using namespace std;
/*
(Médio) Sabe-se que o quilowatt de energia custa um quinto do salário mínimo. Faça um programa que receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência. Calcule e imprima:
a) O valor, em reais, de cada quilowatt
b) O valor, em reais, a ser pago por essa residência
c) O valor a ser pago por essa residência com um desconto de 15%
*/
int main(){

    //kw = 1/5 salario minimo

    float salario, kiloSalario, valorPago;
    int quilowatts;

    cin >> salario >> quilowatts;
    kiloSalario = salario * 0.2;
    valorPago = kiloSalario*quilowatts;

    cout << fixed << setprecision(2);
    cout << "Cada quilowatt vale R$: " << kiloSalario << endl;
    cout << "Valor a ser pago pela residencia R$: "<< valorPago << endl;
    cout << "Valor a ser pago com desconto de 15% R$: " << valorPago - ((valorPago*15) / 100) << endl;

    return 0;
}