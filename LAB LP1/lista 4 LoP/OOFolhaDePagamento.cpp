#include <iostream>

using namespace std;

class Funcionario{
private:
    string nome;
    int matricula;
public:
    //setters
    void setNome(string nome);
    void setMatricula(int matricula);
    //getters
    string getNome();
    int getMatricula();
    //metodos
    Funcionario();

    virtual double calculaSalario()=0;
};
// ___ setters ___
void Funcionario::setNome(string nome){
    this->nome = nome;
}
void Funcionario::setMatricula(int matricula){
    this->matricula = matricula;
}
// ___ getters ___
string Funcionario::getNome(){
    return nome;
}
int Funcionario::getMatricula(){
    return matricula;
}
Funcionario::Funcionario(){
}//End class Funcionario

class Assalariado : public Funcionario{
private:
    double salario;
public:
    Assalariado(double salario);
    virtual double calculaSalario();
};

double Assalariado::calculaSalario(){
    return salario;
}

Assalariado::Assalariado(double salario)
    : Funcionario(){
    this->salario = salario;
}//End class Assalariado

class Horista : public Funcionario{
private:
    double salarioPorHora;
    double horasTrabalhadas;
public:
    virtual double calculaSalario();
    Horista(double salarioPorHora, double horasTrabalhadas);
};

double Horista::calculaSalario(){
    double pagamento=0;

    if(horasTrabalhadas > 40){
        pagamento = (salarioPorHora * 40) + (((horasTrabalhadas - 40)*1.5) * salarioPorHora);
    }else{
        pagamento = salarioPorHora * horasTrabalhadas;
    }
    return (pagamento*4);
}

Horista::Horista(double salarioPorHora, double horasTrabalhadas)
    : Funcionario(){
    this->salarioPorHora = salarioPorHora;
    this->horasTrabalhadas = horasTrabalhadas;
}//End class Horista

class Comissionado : public Funcionario{
private:
    double vendasMensais;
    double percentualComissao;
public:
    Comissionado(double vendasMensais, double percentualComissao);
    virtual double calculaSalario();
};

double Comissionado::calculaSalario(){
    return (vendasMensais * percentualComissao);
}

Comissionado::Comissionado(double vendasMensais, double percentualComissao) 
    : Funcionario(){
    this->vendasMensais = vendasMensais;
    this->percentualComissao = percentualComissao;
}//End class Comissionado

class SistemaGerenciaFolha{
private:
    //Funcionario funcionario[];
public:
    void setFuncionarios();
    double calculaValorTotalFolha();
    double consultaSalarioFuncionario(string nome);

    SistemaGerenciaFolha();
};

SistemaGerenciaFolha::SistemaGerenciaFolha(){
}



int main(){



    return 0;
}