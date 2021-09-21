#include "Veiculo.h"  

Veiculo::Veiculo(std::string n, std::string c, int a){
    nome = n;
    cor = c;
    ano = a;
    velocidade = 0.0;
}

void Veiculo::acelerar(){
    velocidade++;
}
void Veiculo::frear(){
    velocidade--;
}