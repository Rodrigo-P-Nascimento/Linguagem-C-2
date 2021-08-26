#include <iostream>
#include <iomanip>

using namespace std;

/*
(Difícil) Um clube de campo, com o intuito de conhecer o perfil de seus frequentadores, criou
um cadastro com as idades e alturas das pessoas que lá estiveram num final de semana. Fazer
um programa para:
a) Ler um inteiro N (1 <= N <= 10) correspondente ao número de pessoas cadastradas. Não
permita o usuário digitar um número inválido;
b) Ler para as listas "ID" e "ALT" os dados correspondentes à idade e à altura das pessoas
cadastradas;
c) Calcular e imprimir os valores das alturas médias para as 4 faixa etárias que seguem:
Faixa 1: idade menor ou igual a 10 anos;
Faixa 2: idade maior que 10 e menor ou igual a 15 anos;
Faixa 3: idade maior que 15 e menor ou igual a 21 anos;
Faixa 4: idade maior que 21 anos.
*/

void MediaAltura(int age[], float alt[], int tam, int idade1, int idade2){

    int i, cont=0;
    float media=0;

    for(i=0; i < tam; i++){
        if(age[i] >= idade1 && age[i] <= idade2){
            media += alt[i];
            cont++;
        }
    }
    if(media != 0){
        media /= cont;
    }
   
    cout << fixed << setprecision(2);
    cout << "Media da altura das pessoas de " << idade1 << " ate " << idade2 << " anos: " << media << endl;
}

int main(){

    int numPessoas, i;

    cin >> numPessoas;

    int idade[numPessoas];
    float altura[numPessoas];

    for(i=0; i < numPessoas; i++){
        cout << "Digite a idade e a altura da pessoa[" << i << "]: ";
        cin >> idade[i] >> altura[i];
    }

    MediaAltura(idade, altura, numPessoas, 0, 10);
    MediaAltura(idade, altura, numPessoas, 10, 15);
    MediaAltura(idade, altura, numPessoas, 15, 21);
    MediaAltura(idade, altura, numPessoas, 21, 120);

    return 0;
}