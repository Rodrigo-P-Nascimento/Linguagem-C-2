#include <iostream>
#include <iomanip>

#define TAM 100

using namespace std;

typedef struct{
    char nome[TAM];
    float salario;
}tFuncionarios;

/*
(Difícil) Fazer um programa para:
a) Ler um número inteiro N correspondente ao número de funcionários de uma empresa, sendo 0 < N < 80;
b) Ler, em processo repetitivo, o nome e o salário dos N funcionários, colocando-os respectivamente nas listas NOME e SALARIO;
c) Calcular e imprimir o valor do maior salário, com duas casas decimais;
d) Imprimir a lista de nomes de todos os funcionários que obtiveram o salário igual ao maior salário observado.
*/

int main(){

    int numFunc, i;
    float maiorSalario = -99999;

    cin >> numFunc;
    getchar();
    tFuncionarios func[numFunc];

    for(i=0; i < numFunc; i++){
        cin.getline(func[i].nome, TAM);
        cin >> func[i].salario;
        getchar();

        if(maiorSalario < func[i].salario){
            maiorSalario = func[i].salario;
        }
    }

    cout << fixed << setprecision(2);
    cout << "Maior salario foi de R$ " << maiorSalario << endl;

    for(i=0 ; i < numFunc; i++){
        if(func[i].salario == maiorSalario){
            cout << "Pessoas que recebem o mesmo: " << func[i].nome << endl;
        }
    }
    return 0;
}