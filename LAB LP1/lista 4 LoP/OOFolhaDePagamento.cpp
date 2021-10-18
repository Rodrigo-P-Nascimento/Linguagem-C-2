#include <iostream>

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
    Funcionario *func;
    double orcamento;
    int cont;
public:
    void setFuncionarios(Funcionario *func);
    double calculaValorTotalFolha();
    double consultaSalarioFuncionario(string nome);

    SistemaGerenciaFolha(double orcamento);
};

void SistemaGerenciaFolha::setFuncionarios(Funcionario *func){
    this->func[cont] = *func;
    cont++;
}
double SistemaGerenciaFolha::calculaValorTotalFolha(){
    double total=0;

    total += func[0].calculaSalario();
    total += func[1].calculaSalario();
    total += func[2].calculaSalario();

    if(total > orcamento){
        throw "OrcamentoEstouradoException";
    }else{
        return total;
    }
}
double SistemaGerenciaFolha::consultaSalarioFuncionario(string nome){
    for(int i=0; i < 3; i++){
        if(func[i].getNome() == nome){
            return func[i].calculaSalario();
        }
    }
    throw "FuncionarioNaoExisteException";
}

SistemaGerenciaFolha::SistemaGerenciaFolha(double orcamento){
    this->orcamento = orcamento;
    cont=0;
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
        SGF.consultaSalarioFuncionario(name2);
        SGF.consultaSalarioFuncionario(name3);
        SGF.consultaSalarioFuncionario(name4);
    }
    catch(const char *e)
    {
        cout << e << '\n';
    }
    
    return 0;
}