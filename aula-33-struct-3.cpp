#include <iostream>
#include <stdio.h>

//como criar metodos nas struct

using namespace std;

struct Carro{
    string nome;
    string cor;
    int potencia;
    int velociadeMax;

    void insere(string strnome, string strcor, int pot, int velMax){
        nome = strnome;
        cor = strcor;
        potencia = pot;
        if(velMax < 0){
            velociadeMax = 0;
        }else{
            velociadeMax = velMax;
        }
    }

    void mostra(){
        cout <<"Nome do carro: " << nome << "\n";
        cout <<"Cor: " << cor <<"\n";
        printf("Potencia: %d cavalos\n", potencia);
        printf("Valocidade Maxima: %d km/h\n\n", velociadeMax);
    }

    void mudaVel(int novaVelocidade){

        if(novaVelocidade < 0){
            velociadeMax = 0;
        }else{
            velociadeMax = novaVelocidade;
        }
    }

};

int main(){

    Carro carro1, carro2, carro3;

    carro1.insere("Monza", "Preto", 200, 250);
    carro1.mudaVel(-138);
    carro1.mostra();

    carro2.insere("Gol Quadrado", "Azul", 300, 260);
    carro2.mostra();

    carro3.insere("Fuscao", "Preto como o aco", 9999, 9999);
    carro3.mostra();


	return 0;
}
