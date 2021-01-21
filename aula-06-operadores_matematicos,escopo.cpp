#include <iostream>
using namespace std;

int n1,n2 = 0;//Escopo global

int main(void){

    //Operadores matematicos: + - / * %

    int n3,n4; // Escopo local(dentro da funcao main)
    int resp1, resp2;

    n1 = 10;
    n2 = 32;
    n3 = 5;
    n4 = 78;

    resp1 = n1+n2+n3+n4;
    resp2 = resp1%4;
    cout << "A soma de todas as variaveis eh de "<< resp1<< "\n";
    cout << "Ja o resto da divisao por 4 eh "<< resp2<<"\n";

    return 0;
}
