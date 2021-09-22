#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.hpp"

class Consultor : public Funcionario{	
	public:

		Consultor();
		float getSalario();
		float getSalario(float percentual);
};
#endif