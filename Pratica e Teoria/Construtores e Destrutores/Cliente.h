#pragma once

class Cliente{

private:
    
public:
    //Construtores
    Cliente();
    Cliente(int cod);
    Cliente(int cod, std::string n);
    //Destrutor
    ~Cliente();

    int codigo;
    std::string nome;
};




