#include <iostream>

using namespace std;

class Conta{
protected:
    string nomeCliente;
    int numero;
    double saldo;
public:
    void setNomeCliente(string nomeCliente);
    void setNumero(int numero);
    void setSaldo(double saldo);

    string getNomeCliente();
    int getNumero();
    double getSaldo();

    void sacar(double valor);
    void depositar(double valor);
    virtual double saldoTotalDisponivel();
    
    Conta();
    Conta(string nomeCliente, int numero, double saldo);
};
//Setters e Getters
void Conta::setNomeCliente(string nomeCliente){
    this->nomeCliente = nomeCliente;
}
void Conta::setNumero(int numero){
    this->numero = numero;
}
void Conta::setSaldo(double saldo){
    this->saldo = saldo;
}

string Conta::getNomeCliente(){
    return nomeCliente;
}
int Conta::getNumero(){
    return numero;
}
double Conta::getSaldo(){
    return saldo;
}
//Metodos

void Conta::sacar(double valor){
    if(saldo < valor){
        cout << "\nsaldo insuficiente" << endl;
        return;
    }else{
        saldo -= valor;
    }
}
void Conta::depositar(double valor){
    saldo += valor;
}

double Conta::saldoTotalDisponivel(){
    return saldo;
}
//Construtores
Conta::Conta(string nomeCliente, int numero, double saldo){
    this->nomeCliente = nomeCliente;
    this->numero = numero;
    this->saldo = saldo;
}
Conta::Conta(){
}//End class Conta

class Poupanca : public Conta{
protected:
    int variacao;
    double taxaRendimento;
public: 
    double render();
    
    Poupanca();
    Poupanca(string nomeCliente, int numero);
};
//Metodos

double Poupanca::render(){
    if(variacao == 51){
        return 0.006 * saldo + saldo;
    }else{
        return (taxaRendimento+0.005) * saldo;
    }
}
//Construtores
Poupanca::Poupanca(string nomeCliente, int numero) 
    : Conta(nomeCliente, numero, 0){
    this->variacao = 51;
    this->taxaRendimento = 0.006;
}

Poupanca::Poupanca() 
    : Conta(){
}//End class Poupanca

class ContaCorrente : public Conta{
protected:
    double salario;
    int limite;
public:
    double getSalario();

    virtual double definirLimite();
    virtual double saldoTotalDisponivel();

    ContaCorrente();
    ContaCorrente(double salario, string nomeCliente, int numero, double saldo);
};
//Metodos
double ContaCorrente::getSalario(){
    return salario;
}
double ContaCorrente::definirLimite(){
    return salario * 2;
}
double ContaCorrente::saldoTotalDisponivel(){
    return saldo + limite - salario;
}

//Construtores
ContaCorrente::ContaCorrente(double salario, string nomeCliente, int numero, double saldo)
    : Conta(nomeCliente, numero, saldo){
    this->salario = salario;
    this-> limite = definirLimite();
}
ContaCorrente::ContaCorrente()
    : Conta(){
}//End class ContaCorrente

class ContaEspecial : public ContaCorrente{
public:
    virtual double definirLimite();
    virtual double saldoTotalDisponivel();

    ContaEspecial();
    ContaEspecial(double salario, string nomeCliente, int numero, double saldo);
};
//Metodos
double ContaEspecial::definirLimite(){
    return salario * 4;
}
double ContaEspecial::saldoTotalDisponivel(){
    return saldo + limite - salario;
}
//Construtores
ContaEspecial::ContaEspecial(double salario, string nomeCliente, int numero, double saldo)
    : ContaCorrente(salario, nomeCliente, numero, saldo){
    this->limite = definirLimite();
}
ContaEspecial::ContaEspecial()
    : ContaCorrente(){
}//End class ContaEspecial
int main(){
    ContaCorrente cc;
    ContaEspecial cce;
    Poupanca pp;

    string nome;
    float salario, sacar, sacar1, depositar;
    int numero;

    getline(cin, nome);
    cin >> numero;
    cin >> salario;
    cin >> depositar;
    cin >> sacar;

    cc = ContaCorrente(salario, nome, numero, salario);
    cc.definirLimite();
    cc.depositar(depositar);
    cc.sacar(sacar);

    cin.ignore();
    getline(cin, nome);
    cin >> numero;
    cin >> salario;
    cin >> depositar;
    cin >> sacar;

    cce = ContaEspecial(salario, nome, numero, salario);
    cce.definirLimite();
    cce.depositar(depositar);
    sacar1 = sacar;
    
    cin.ignore();
    getline(cin, nome);
    cin >> numero;
    cin >> depositar;
    cin >> sacar;

    pp = Poupanca(nome, numero);
    
    pp.depositar(depositar);
    pp.sacar(sacar);

    cout << cc.getNomeCliente() << ", cc: " << cc.getNumero() << ", salário " << cc.getSalario() << ", saldo total disponível: R$ " << cc.saldoTotalDisponivel() << endl;
    cout << cce.getNomeCliente() << ", cc: " << cce.getNumero() << ", salário " << cce.getSalario() << ", ";
    cce.sacar(sacar1);
    cout << "saldo total disponível: R$ " << cce.saldoTotalDisponivel() << endl;
    cout << pp.getNomeCliente() << ", cc: " << pp.getNumero() << ", saldo total disponível: R$ " << pp.render() << endl;
}   