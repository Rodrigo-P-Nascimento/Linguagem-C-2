#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Funcionario{
protected:
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
protected:
    double salario;
public:
    Assalariado(double salario);
    Assalariado();
    virtual double calculaSalario();
};

double Assalariado::calculaSalario(){
    return salario;
}

Assalariado::Assalariado()
    : Funcionario(){
}

Assalariado::Assalariado(double salario)
    : Funcionario(){
    this->salario = salario;
}//End class Assalariado

class Horista : public Funcionario{
protected:
    double salarioPorHora;
    double horasTrabalhadas;
public:
    virtual double calculaSalario();
    Horista();
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

Horista::Horista() 
    : Funcionario(){
}

Horista::Horista(double salarioPorHora, double horasTrabalhadas)
    : Funcionario(){
    this->salarioPorHora = salarioPorHora;
    this->horasTrabalhadas = horasTrabalhadas;
}//End class Horista

class Comissionado : public Funcionario{
protected:
    double vendasMensais;
    double percentualComissao;
public:
    Comissionado();
    Comissionado(double vendasMensais, double percentualComissao);
    virtual double calculaSalario();
};

double Comissionado::calculaSalario(){
    return (vendasMensais * percentualComissao);
}

Comissionado::Comissionado()
    : Funcionario(){
}

Comissionado::Comissionado(double vendasMensais, double percentualComissao) 
    : Funcionario(){
    this->vendasMensais = vendasMensais;
    this->percentualComissao = percentualComissao;
}//End class Comissionado

class SistemaGerenciaFolha{
protected:
    //Funcionario *func;
    vector<Funcionario*> func;
    double orcamento;
    int cont;
public:
    void setFuncionarios(Funcionario *func);
    int calculaValorTotalFolha();
    double consultaSalarioFuncionario(string nome);

    SistemaGerenciaFolha();
    SistemaGerenciaFolha(double orcamento);
};

void SistemaGerenciaFolha::setFuncionarios(Funcionario *func){
    this->func.push_back(func);
}
int SistemaGerenciaFolha::calculaValorTotalFolha(){
    int total=0;
    
    for(auto& it : func){
        total+= it->calculaSalario();
    }
    string nam1 = "OrcamentoEstouradoException ";
    nam1 += std::to_string(total);

    if(total > orcamento){
        throw nam1;
    }else{
        return total;
    }
}
double SistemaGerenciaFolha::consultaSalarioFuncionario(string nome){
    for(auto& it : func){
        if(it->getNome() == nome){
            return it->calculaSalario();
        }
    }
    string num1 = "FuncionarioNaoExisteException ";
    num1 += nome;

    throw (num1);
}

SistemaGerenciaFolha::SistemaGerenciaFolha(double orcamento){
    this->orcamento = orcamento;
    cont=0;
}
SistemaGerenciaFolha::SistemaGerenciaFolha(){
}
int main(){

    double orcamentoMax, salario, porcentagem, vendasSemanais;
    int numero, horasTra, salarioHora;
    string nome, name2, name3, name4;

    cin >> orcamentoMax;

    SistemaGerenciaFolha  SGF = SistemaGerenciaFolha(orcamentoMax);
    Funcionario *ass;
    Funcionario *hor;
    Funcionario *cms;

    cin.ignore();
    getline(cin, nome);
    cin >> numero >> salario;
    ass = new Assalariado(salario);
    ass->setNome(nome);
    ass->setMatricula(numero);

    cin.ignore();
    getline(cin, nome);
    cin >> numero >> salarioHora >> horasTra;
    hor = new Horista(salarioHora, horasTra);
    hor->setNome(nome);
    hor->setMatricula(numero);

    cin.ignore();
    getline(cin, nome);
    cin >> numero >> vendasSemanais >> porcentagem;
    cms = new Comissionado(vendasSemanais, porcentagem);
    cms->setNome(nome);
    cms->setMatricula(numero);

    SGF.setFuncionarios(ass);
    SGF.setFuncionarios(hor);
    SGF.setFuncionarios(cms);

    cin.ignore();
    getline(cin, name2);
    getline(cin, name3);
    getline(cin, name4);

    try{
        cout << SGF.consultaSalarioFuncionario(name2) << endl;
    }catch(string e){
        cout << e << '\n';
    }
    try{
        cout << SGF.consultaSalarioFuncionario(name3) << endl;
    }catch(string e){
        cout << e << '\n';
    }
    try{
        cout << SGF.consultaSalarioFuncionario(name4) << endl;
    }catch(string e){
        cout << e << '\n';
    }
    try{
        cout << SGF.calculaValorTotalFolha() << endl;
    }
    catch(string e){
        cout << e << '\n';
    }
   
    return 0;
}