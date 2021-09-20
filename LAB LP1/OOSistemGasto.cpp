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
    //valor = 0;
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
    despesas[pos] = d;
}
Despesa ControleDeGastos::getDespesa(int pos){
    return despesas[pos];
}
float ControleDeGastos::calculaTotalDeDespesas(){
    float cont=0;

    for(int i=0; i < 100; i++){
        cont+= despesas[i].getValor();
    }

    return cont;
}

float ControleDeGastos::calculaTotalDeDespesas(string tipo){
    float cont=0;

    for(int i=0; i < 100; i++){
        if(despesas[i].gettipoDeGasto() == tipo){
            cont+= despesas[i].getValor();
        }
    }

    return cont;
}

bool ControleDeGastos::existeDespesaDoTipo(string tipo){
    bool existe = false;

    for(int i=0; i < 100; i++){
        if(despesas[i].gettipoDeGasto() == tipo){
            existe = true;
            cout << despesas[i].getNome() << ", R$ " << despesas[i].getValor() << endl;
        }
    }
    
    return existe;
}

int main(){

    ControleDeGastos despe;
    Despesa aux;

    int num, i;
    string name, typeOfExpense;
    float value;

    cin >> num;
    cin.ignore();

    for(i=0; i < num; i++){
        getline(cin, name);
        cin >> value;
        cin.ignore();
        getline(cin, typeOfExpense);

        aux.setNome(name);
        aux.settipoDeGasto(typeOfExpense);
        aux.setValor(value);

        despe.setDespesa(aux, i);
    }

    getline(cin, typeOfExpense); // Estou reclicando a variavel para ser usada como parametro de pesquisa.

    if(despe.existeDespesaDoTipo(typeOfExpense) == false){
        cout << "Nenhuma despesa do tipo especificado" << endl;
    }

    cout << "Total: " << despe.calculaTotalDeDespesas(typeOfExpense) << "/" << despe.calculaTotalDeDespesas() << endl;
    
    return 0;
}

