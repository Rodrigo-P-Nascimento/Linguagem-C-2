#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float salario=0, emprestimo=0;  //Não ultrapassar 30% do valor do salario
    int numPres=0;

    //Leitura dos valores e verificação dos valores
    while(salario <= 0){
        cin >> salario;
    }
    while(emprestimo <= 0){
        cin >> emprestimo;
    }
    while(numPres <= 0){
        cin >> numPres;
    }
    
    if(salario <= 0 || emprestimo <= 0 || numPres <= 0){
        cout << "Emprestimo nao pode ser concedido" << endl;
    }else{
        if((((emprestimo*100)/salario)/numPres) <= 30.0){//Verificação para ver se o valor do emprestimo é cabivél ou não
            cout << "Emprestimo pode ser concedido" << endl;
        }else{
            cout << "Emprestimo nao pode ser concedido" << endl;
        }
    }

    return 0;
}