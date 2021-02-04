#include <iostream>
#include <stdio.h>

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

    Carro *carros= new Carro[3];
    Carro carro1, carro2, carro3;

    carros[0]=carro1; carros[1]=carro2; carros[2]=carro3;

    carros[0].insere("Marquinhos", "Vermelho", 344, 370);
    carros[1].insere("Fuscao", "Preto", 999, 999);
    carros[2].insere("Compacto", "Cinza Claro", 200, 250);

    for(int i=0;i < 3;i++){
        carros[i].mostra();
    }

	return 0;
}
