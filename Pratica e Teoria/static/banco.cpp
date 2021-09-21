#include "banco.hpp"  

float banco::juros = 0.4;

std::string banco::getNome(){
    return this->nome;
}
std::string banco::getEndereco(){
    return this->endereco;
}

banco::banco()
{
	
}
	
banco::~banco()
{
	
}