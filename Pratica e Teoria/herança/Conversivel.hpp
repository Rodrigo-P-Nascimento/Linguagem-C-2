#ifndef CONVERSIVEL_H
#define CONVERSIVEL_H
#include <iostream>
#include "Veiculo.hpp"
	
class Conversivel : public Veiculo{
private:
	bool teto;
public:
	Conversivel(std::string n, std::string c, int a);
	void subirTeto();
	void descerTeto();

};
#endif