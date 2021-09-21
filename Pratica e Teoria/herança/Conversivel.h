#pragma once
#include <iostream>
#include "Veiculo.h"
	
class Conversivel : public Veiculo{
private:
	bool teto;
public:
	Conversivel(std::string n, std::string c, int a);
	void subirTeto();
	void descerTeto();

};

