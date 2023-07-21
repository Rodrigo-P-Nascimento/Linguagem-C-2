#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float salario, salaMinimo;
    float resto;

    cin >> salario;
    cin >> salaMinimo;

    resto = salario / salaMinimo;

    cout << fixed << setprecision(1);//Colocando apenas para mostar uma casa decimal

    cout << "O funcionario recebe o salario minimo: " << resto << " vezes" << endl;

    return 0;
}