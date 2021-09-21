#ifndef BANCO_H
#define BANCO_H

#include <iostream>

class banco 
{
	private:
	std::string endereco;
	std::string nome;
	static float juros;

	public:

	banco();
	~banco();
	std::string getNome();
	std::string getEndereco();

};
#endif