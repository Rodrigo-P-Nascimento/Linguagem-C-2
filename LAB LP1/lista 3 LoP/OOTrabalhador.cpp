#include <iostream>

using namespace std;

class Trabalhador{
protected:
    string nome;
    float salario;
public:
    //setters
    void setNome(string nome);
    void setSalario(float salario);
    //getters
    string getNome();
    float getSalario();
    //Construtor
    Trabalhador();
};
//   ___ setters ___
void Trabalhador::setNome(string nome){
    this->nome = nome;
}
void Trabalhador::setSalario(float salario){
    this->salario = salario;
}
// ___ getters ___
string Trabalhador::getNome(){
    return this->nome;
}
float Trabalhador::getSalario(){
    return this->salario;
}
Trabalhador::Trabalhador(){
    this->salario = 0.0;
}//End class Trabalhador

class TrabalhadorAssalariado : public Trabalhador{
public:
    float calcularPagamentoSemanal();
    TrabalhadorAssalariado();
    TrabalhadorAssalariado(float salario);
};
// ___ Metodos ___
TrabalhadorAssalariado::TrabalhadorAssalariado(){
}
TrabalhadorAssalariado::TrabalhadorAssalariado(float salario){
    this->salario = salario;
}
float TrabalhadorAssalariado::calcularPagamentoSemanal(){
    return (salario/4);
}//End class TrabalhadorAssalariado

class TrabalhadorPorHora : public Trabalhador{
protected:
    float valorDaHora;
public:
    TrabalhadorPorHora();
    TrabalhadorPorHora(float valorDaHora);
    float calcularPagamentoSemanal(int horasSemanais);
};
// ___ Metodos ___
float TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais){
    float PagamentoSemanal;

    if(horasSemanais <= 40){
        PagamentoSemanal = horasSemanais * valorDaHora;
    }else if(horasSemanais > 40){
        int horasExtras = (horasSemanais - 40);
        PagamentoSemanal = (40 * valorDaHora) + (horasExtras * 1.5 * valorDaHora);
    }

    this->salario = (PagamentoSemanal * 4);
    return PagamentoSemanal;
}
TrabalhadorPorHora::TrabalhadorPorHora(){
}
TrabalhadorPorHora::TrabalhadorPorHora(float valorDaHora){
    this->valorDaHora = valorDaHora;
}//End class TrabalhadorPorHora

int main(){
    int num, tipo, horasTrabalhas;
    string nome;
    float salario, valorPorHora;

    cin >> num;

    for(int i=0; i < num; i++){
        cin >> tipo;

        if(tipo == 1){  
            cin.ignore();
            getline(cin, nome);
            cin >> salario;
            TrabalhadorAssalariado TraAS = TrabalhadorAssalariado(salario);
            TraAS.setNome(nome);

            cout << TraAS.getNome() << " - Semanal: R$ " << TraAS.calcularPagamentoSemanal() << " - Mensal: R$ " << TraAS.getSalario() << endl;
        }else if(tipo == 2){
            cin.ignore();
            getline(cin, nome);
            cin >> valorPorHora;
            cin >> horasTrabalhas;

            TrabalhadorPorHora TraPH = TrabalhadorPorHora(valorPorHora);

            TraPH.setNome(nome);

            cout << TraPH.getNome() << " - Semanal: R$ " << TraPH.calcularPagamentoSemanal(horasTrabalhas) << " - Mensal: R$ " << TraPH.getSalario() << endl;
        }
    }
}