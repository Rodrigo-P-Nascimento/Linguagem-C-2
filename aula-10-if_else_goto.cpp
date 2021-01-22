#include <iostream>
#include <stdlib.h> //biblioteca do C que tem a função system

using namespace std;

int main(void){

    float media, nota1, nota2;
    char opc;

    inicio: //label para o goto
    system("clear"); //vc passa o comando como parametro nessa funcao

    cout << "Digite a primeira nota do aluno: ";
    cin >> nota1;
    cout << "Digite a segunda nota do aluno: ";
    cin >> nota2;

    media = (nota1 + nota2) / 2;

    cout << "A media do aluno foi de " << media;
    if(media >= 7){
        cout << "\nO aluno foi aprovado\n";
    }else if(media >= 5){
        cout << "\nO aluno esta em recuperacao\n";
    }else{
        cout << "\nO aluno foi reprovado\n";
    }

    cout << "\nDeseja colocar mais notas[s/n]? ";
    cin >> opc;

    if(opc == 's'  or opc =='S'){
        goto inicio;//ele procura o label (inicio: ) e volta para ele tlg
    }else{
        cout << "Obrigado por usar nosso software!";
    }

    return 0;
}
