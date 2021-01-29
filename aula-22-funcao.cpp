#include <iostream>
using namespace std;

//prototipagem de uma funcao, tem que declarar antes de usa-la.
void Texto();
void Soma(int num1, int num2);
int Subtracao(int n1, int n2);
void MostraTrasnporte(string tra[4]);

int main(){

    int resul;
    string trans[4]={"Carro", "Moto", "Barco", "Aviao"};

    Soma(5, 10);
    resul = Subtracao(90, 50);
    cout << "O resultado da subtracao eh " << resul <<"\n";

    MostraTrasnporte(trans);

	return 0;
}

void Texto(){

    cout << "Funcao Texto escreve algo na tela";
}

void Soma(int num1, int num2){

    cout <<"A soma dos valores eh "<< num1+num2<< "\n";
}

int Subtracao(int n1, int n2){

    int resultado;
    resultado = n1 - n2;

    return resultado;
}

void MostraTrasnporte(string tra[4]){
    int i;

    for(i=0;i < 4;i++){
        cout << tra[i] <<"\n";
    }
}


