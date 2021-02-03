#include <iostream>
#include <stdio.h>

using namespace std;

struct Carro{
    string nome;
    string cor;
    int potencia;
    int velociadeMax;

};

int main(){

    Carro carro1;

    printf("Insira o nome do carro: ");
    cin >> carro1.nome;

    printf("Insira a cor do carro: ");
    cin >> carro1.cor;

    printf("Insira a potencia depois a velocidade maxima: ");
    scanf("%d %d", &carro1.potencia, &carro1.velociadeMax);

    cout <<"Nome do carro: " << carro1.nome << "\n";
    cout <<"Cor: " << carro1.cor <<"\n";
    printf("Potencia: %d cavalos\n", carro1.potencia);
    printf("Valocidade Maxima: %d km/h\n", carro1.velociadeMax);

	return 0;
}
