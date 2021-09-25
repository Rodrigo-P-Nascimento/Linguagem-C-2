#include <iostream>
#include "Funcionario.hpp"
//#include "Funcionario.cpp"
#include "Consultor.hpp"
//#include "Consultor.cpp"

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