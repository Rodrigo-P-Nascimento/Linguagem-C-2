#include <iostream>
#include <iomanip>

#define TAM 6

using namespace std;

typedef struct{
    char resposta;
    char sexo;
}tDados;

/*
Médio) Uma firma fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de
um novo produto lançado no mercado. Para isto, forneceu o sexo do entrevistado (M-masculino
ou F-feminino) e sua resposta (S-sim ou N-não). Sabendo-se que foram entrevistadas 2.000
pessoas, fazer um programa que calcule e escreva:
a) Número de pessoas que responderam sim (S);
b) Número de pessoas que responderam não (N);
c) A porcentagem de pessoas do sexo feminino (F);
d) A porcentagem de pessoas do sexo masculino (M).
*/

int main(){

    tDados pessoas[TAM];
    char resp, sex;
    int i, contSim=0, contNao=0, quantF=0, quantM=0;

    for(i=0; i < TAM; i++){
        cin >> pessoas[i].sexo;
        getchar();
        cin >> pessoas[i].resposta;
        getchar();
    }

    for(i=0; i < TAM; i++){
        if(pessoas[i].resposta == 'S'){
            contSim++;
        }else{
            contNao++;
        }
        if(pessoas[i].sexo == 'F'){
            quantF++;
        }else{
            quantM++;
        }
    }

    cout << contSim << " Responderam como Sim!" << endl;
    cout << contNao << " Responderam como Nao!" << endl;
    cout << ((quantF*100) / TAM) << "% mulheres participaram da pesquisa e " << ((quantM*100) / TAM) << "% mens participaram da pesquisa." << endl;

    return 0;
}