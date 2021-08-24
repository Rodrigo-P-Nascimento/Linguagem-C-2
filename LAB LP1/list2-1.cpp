#include <iostream>
#include <iomanip>

#define TAM 50

using namespace std;


typedef struct{
    float altura;
    char sexo;
}tDados;


/*
(Médio) Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de 50
pessoas. Fazer um programa que calcule e escreva:
a) A maior e a menor altura do grupo;
b) A média das alturas das mulheres;
c) O número de homens.
*/

int main(){

    tDados pessoas[TAM];
    float menorAlt=99999, maiorAlt=-99999, media=0;
    int i, contHomem=0, contMulher=0;

    for(i=0; i < TAM; i++){
        cin >> pessoas[i].altura;
        getchar();
        cin >> pessoas[i].sexo;
    }

    for(i = 0; i < TAM; i++){
        if(pessoas[i].altura > maiorAlt){
            maiorAlt = pessoas[i].altura;
        }
        if(pessoas[i].altura <  menorAlt){
            menorAlt = pessoas[i].altura;
        }
        
        if(pessoas[i].sexo == 'm' || pessoas[i].sexo == 'M'){
            contHomem++;
        }else if(pessoas[i].sexo == 'f' || pessoas[i].sexo == 'F'){
            media += pessoas[i].altura;
            contMulher++;
        }
    }

    media /= contMulher;    
    cout << fixed << setprecision(2);
    cout << "Maior altura: " << maiorAlt << endl;
    cout << "Menor altura: " << menorAlt << endl;
    cout << "Media das aluras das mulheres: " << media << endl;
    cout << "Quantidade de homens: " << contHomem << endl;
    
    return 0;
}