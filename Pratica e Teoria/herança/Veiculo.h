#pragma once
#include <iostream>

class Veiculo{
	
protected:
	std::string nome;
	std::string cor;
	int ano;
	double velocidade;

public:
	Veiculo(std::string n, std::string c, int a);
	void acelerar();
	void frear();

};

