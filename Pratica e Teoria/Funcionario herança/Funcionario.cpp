#include "Funcionario.hpp"  

void Funcionario::setNome(string nome){
    this->nome = nome;
}
void Funcionario::setMatricula(int matricula){
    this->matricula = matricula;
}
void Funcionario::setSalario(float salario){
    this->salario = salario;
}
int Funcionario::getMatricula(){
    return this->matricula;
}
string Funcionario::getNome(){
    return this->nome;
}
float Funcionario::getSalario(){
    return this->salario;
}


Funcionario::Funcionario()
{
	
}
	