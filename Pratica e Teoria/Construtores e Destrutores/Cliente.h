#pragma once
#include <iostream>

class Cliente{

public:
    //Construtores
    Cliente();
    Cliente(int codigo);
    Cliente(int codigo, std::string nome);
    //Destrutor
    virtual ~Cliente();

    void setSexo(std::string sexo);
    std::string getSexo();

    int codigo;
    std::string nome;

private:

    std::string sexo;
};


Cliente::Cliente(){
    this->codigo = 0;
    this->nome = "VAZIO";
}

Cliente::Cliente(int codigo){
    this->codigo = codigo;
    this->nome = "VAZIO";
}

Cliente::Cliente(int codigo, std::string nome){
    this->codigo = codigo;
    this->nome = nome;
}

Cliente::~Cliente(){
}

void Cliente::setSexo(std::string sexo){
    this->sexo = sexo;
}

std::string Cliente::getSexo(){
    return this->sexo;
}





