#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>

class Veiculo{
	
protected:
	std::string nome;
	std::string cor;
	int ano;
	double velocidade;

public:
	Veiculo(std::string n, std::string c, int a);
	Veiculo();
	void acelerar();
	void frear();

};
#endif