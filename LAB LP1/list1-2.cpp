#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    int num1, num2;

    cin >> num1 >> num2;

    cout << fixed << setprecision(0);

    cout << "Soma dos numeros: " << num1+num2 << endl;
    cout << "Subtracao do primeiro pelo segundo: "<< num1-num2 << endl;
    cout << "Multiplicacao dos numeros " << num1 << " e " << num2 << " = " << num1*num2 << endl;
    cout << "Quociente inteiro da divisao dos dois numero: " << num1/num2 << endl;
    cout << "Resto da divisao do primeiro pelo segundo: "<< num1%num2 << endl;
    cout << fixed << setprecision(2);
    cout << "Raiz quadrada do segundo numero: " << sqrt(num2) << endl;
    cout << "Primeiro ao quadrado: " << pow(num1, 2) << endl;

    return 0;
}