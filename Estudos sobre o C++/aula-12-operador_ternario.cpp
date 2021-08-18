#include <iostream>

using namespace std;

int main(void){
    //Esse operador eh como se fosse um if simplificado, mas tem um certo limite. Porém, ele eh mais rapido
    //(expressao) ? valor1 : valor2;

    float nota1, nota2, media;
    string res;
    cout << "Digite a primeira nota do aluno: ";
    cin >> nota1;
    cout << "Digite a segunda nota do aluno: ";
    cin >> nota2;

    media = (nota1 + nota2)/2;

    res = (media >=6.0) ? "Aprovado" : "Reprovado";

    cout << "\nMedia: "<< media << " situacao do aluno: "<< res << "\n";

    return 0;
}
