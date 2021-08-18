#include <iostream>

using namespace std;

int main(void){

    int numeros;
    char caracteres;
    double decimal_1 = 34.67;
    float decimal_2 = 56.78;    //precisao menor do que a do double
    bool verda_falso = true; //verdadeiro = True-1 --- falso = false-0
    string nome = "Coding is life, BRO!";

    cout << "Digite um numero inteiro qualquer: ";
    cin >> numeros;
    cout << "Digite apenas uma letra: ";
    cin >> caracteres;
    cout << "Digite um numero decimal-1: ";
    cin >> decimal_1;
    cout << "Digite um numero decimal-2: ";
    cin >> decimal_2;
    cout << "Digite o seu nome: ";
    cin >> nome;

    cout << "\nNumero: "<< numeros;
    cout << "\nLetra: "<< caracteres;
    cout << "\nDecimal 1: " << decimal_1;
    cout << "\nDecimal 2: " << decimal_2;
    cout << "\nNome: " << nome;
    cout << "\nNome: " << nome;

    return 0;
}
