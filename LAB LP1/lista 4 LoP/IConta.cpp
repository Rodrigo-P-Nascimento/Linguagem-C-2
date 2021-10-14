#include <iostream>

using namespace std;

class IConta{
public:
    IConta();
    
    virtual void sacar(double valor)=0;
    virtual void depositar(double valor)=0;
    virtual void saldoTotalDisponivel()=0;
};

IConta::IConta(){
}//end class IConta

class Conta : public IConta{
protected:
    string nomeCliente;
    int numeroConta;
    double salarioMensal;
    double saldo;
    double limite;
public:
    //Setters
    void setNome(string nomeCliente);
    void setNumeroConta(int numeroConta);
    void setSalarioMensal(double salarioMensal);
    void setSaldo(double saldo);
    virtual void setLimite(double saldoLimite);
    //Getters
    string getNomeCliente();
    int getNumeroConta();
    double getSalarioMensal();
    double getSaldo();
    double getLimite();
    //Metodos
    virtual void sacar(double valor) override;
    virtual void depositar(double valor) override;
    virtual void saldoTotalDisponivel() override;
    //Construtores
    Conta();
    Conta(string nomeCliente, int numeroConta, double salarioMensal);
};
//___ setters ___
void Conta::setNome(string nomeCliente){
    this->nomeCliente = nomeCliente;
}
void Conta::setNumeroConta(int numeroConta){
    this->numeroConta = numeroConta;
}
void Conta::setSalarioMensal(double salarioMensal){
    this->salarioMensal = salarioMensal;
}
void Conta::setSaldo(double saldo){
    this->saldo = saldo;
}
void Conta::setLimite(double saldoLimite){
    this->limite = (salarioMensal * 2);
}
// ___ getters ___
string Conta::getNomeCliente(){
    return nomeCliente;
}
int Conta::getNumeroConta(){
    return numeroConta;
}
double Conta::getSalarioMensal(){
    return salarioMensal;
}
double Conta::getSaldo(){
    return saldo;
}
double Conta::getLimite(){
    return limite;
}
// ___ metodos ___
void Conta::sacar(double valor){
    saldo -= valor;
}
void Conta::depositar(double valor){
    saldo += valor;
}
void Conta::saldoTotalDisponivel(){
    cout << saldo + limite;
}
// ___ construtores ___
Conta::Conta()
    : IConta()
{
}
Conta::Conta(string nomeCliente, int numeroConta, double salarioMensal)
    : IConta()
{
    this->nomeCliente = nomeCliente;
    this->numeroConta = numeroConta;
    this->salarioMensal = salarioMensal;
    this->saldo = 0;
    setLimite(salarioMensal);
}//end class Conta

class ContaEspecial : public Conta{
public:
    virtual void setLimite(double saldoLimite) override;

    ContaEspecial();
    ContaEspecial(string nomeCliente, int numeroConta, double salarioMensal);

};

void ContaEspecial::setLimite(double saldoLimite){
    this->limite = (salarioMensal * 3);
}

ContaEspecial::ContaEspecial()
    : Conta()
{
}

ContaEspecial::ContaEspecial(string nomeCliente, int numeroConta, double salarioMensal)
    : Conta(nomeCliente, numeroConta, salarioMensal)
{
    setLimite(salarioMensal);
}


int main(){

    Conta cliente1;
    ContaEspecial cliente2;

    string nome;
    int numConta;
    double salario, sacar, depositar;

    getline(cin, nome);
    cin >> numConta;
    cin >> salario;
    cin >> depositar >> sacar;
    cliente1 = Conta(nome, numConta, salario);
    cliente1.depositar(depositar);
    cliente1.sacar(sacar);


    cin.ignore();
    getline(cin, nome);
    cin >> numConta;
    cin >> salario;
    cin >> depositar >> sacar;
    cliente2 = ContaEspecial(nome, numConta, salario);
    cliente2.depositar(depositar);
    cliente2.sacar(sacar);

    cout << cliente1.getNomeCliente() << ", cc: "<< cliente1.getNumeroConta() << ", salário " << cliente1.getSalarioMensal() << ", saldo total disponível: R$ ";
    cliente1.saldoTotalDisponivel();
    cout << endl;

    cout << cliente2.getNomeCliente() << ", cc: "<< cliente2.getNumeroConta() << ", salário " << cliente2.getSalarioMensal() << ", saldo total disponível: R$ ";
    cliente2.saldoTotalDisponivel();
    cout << endl;

    return 0;
}