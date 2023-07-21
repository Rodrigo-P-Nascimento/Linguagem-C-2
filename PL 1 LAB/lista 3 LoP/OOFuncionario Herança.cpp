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

Funcionario::Funcionario(){
}

class Consultor : public Funcionario{	
	public:

		Consultor();
		float getSalario();
		float getSalario(float percentual);
};

float Consultor::getSalario(){
    return (salario + (salario*0.1));
}
float Consultor::getSalario(float percentual){
    return (salario + (salario*percentual));
}

Consultor::Consultor(){
}

int main(){

    Funcionario func;
    Consultor cons;

    string nome;
    int matricula;
    float salario;

    //Leitura dos valores para o func
    cin >> matricula;
    cin.ignore();
    getline(cin, nome);
    cin >> salario;

    func.setMatricula(matricula);
    func.setNome(nome);
    func.setSalario(salario);

    //Leitura dos valores para o cons
    cin >> matricula;
    cin.ignore();
    getline(cin, nome);
    cin >> salario;

    cons.setMatricula(matricula);
    cons.setNome(nome);
    cons.setSalario(salario);

    cout << func.getMatricula() << " - " << func.getNome() << " - R$ " << func.getSalario() << endl;
    cout << cons.getMatricula() << " - " << cons.getNome() << " - R$ " << cons.getSalario() << endl;

    return 0;
}