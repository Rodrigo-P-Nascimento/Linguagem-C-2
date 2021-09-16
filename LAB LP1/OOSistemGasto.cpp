#include <iostream>
#include <string>

using namespace std;

class Despesa{
private:
    string nome;
    float valor;
    string tipoDeGasto;
public:
    //Seteres
    void setNome(string nome);
    void setValor(float valor);
    void settipoDeGasto(string tipoDeGasto);
    //Geteres
    string getNome();
    float getValor();
    string gettipoDeGasto();
    //Metodos
    Despesa();
};
//___ set ___
void Despesa::setNome(string nome){
    this->nome = nome;
}
void Despesa::setValor(float valor){
    this->valor = valor;
}
void Despesa::settipoDeGasto(string tipoDeGasto){
    this->tipoDeGasto = tipoDeGasto;
}
//___ get ___
string Despesa::getNome(){
    return nome;
}
float Despesa::getValor(){
    return valor;
}
string Despesa::gettipoDeGasto(){
    return tipoDeGasto;
}
//___ metodos ___
Despesa::Despesa(){
    valor = 0;
}

class ControleDeGastos{
private:
    Despesa despesas[100];
public:
    void setDespesa(Despesa d, int pos);
    Despesa getDespesa(int pos);
    float calculaTotalDeDespesas();
    float calculaTotalDeDespesas(string tipo);
    bool existeDespesaDoTipo(string tipo);
};
//___ Metodos ___
void ControleDeGastos::setDespesa(Despesa d, int pos){
    
}

int main(){

    ControleDeGastos despe[100];


    return 0;
}

