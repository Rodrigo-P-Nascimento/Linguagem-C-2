#include <iostream>
#include <string>

using namespace std;

class Despensa{
private:
    string nome;
    float valor;
    string tipoDeGasto;
public:
    Despensa();

    //Conjuntos de seters
    void setNome(string nm){
        nome = nm;
    }
    void setTipoDeGasto(string tc){
        nome = tc;
    }
    void setValor(float vl){
        valor = vl;
    }

    //Conjunto de geters
    string getNome(){
        return nome;
    }

    string getTipo(){
        return tipoDeGasto;
    }

    float getValor(){
        return valor;
    }
};

Despensa::Despensa(){
    valor = 0;
}

class ControledeGastos{
private:
    Despensa despesas[100];
public:
    ControledeGastos();
    
    void setDespesa(Despensa *d, int pos);
};

ControledeGastos::ControledeGastos(){
}
void setDespesa(Despensa *d, int pos){
    d[pos];
}



int main(){

    



    return 0;
}

