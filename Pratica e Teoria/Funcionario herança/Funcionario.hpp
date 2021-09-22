#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>

using namespace std;
	
class Funcionario {
	protected:
		int matricula;
		string nome;
		float salario;
	public:	
		//setteres
		void setNome(string nome);
		void setMatricula(int matricula);
		void setSalario(float salario);
		//getteres
		int getMatricula();
		string getNome();
		float getSalario();

		Funcionario();
};
#endif