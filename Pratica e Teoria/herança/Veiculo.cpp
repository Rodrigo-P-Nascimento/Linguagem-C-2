#include "Veiculo.h"  
#include <iostream>

Veiculo::Veiculo(){
}

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