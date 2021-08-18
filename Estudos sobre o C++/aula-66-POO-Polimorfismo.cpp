#include <iostream>

using namespace std;

class Carro{
private :
    int velMax;
    const char* nome;
public:
    int potencia;

    int getVelMa(){
        return velMax;
    }
    const char* getNome(){
        return nome;
    }

    void imprimir(){
        cout << "----------------------------------"<<endl;
        cout << "Nome: "<< nome << endl;
        cout << "Potencia: " << potencia << endl;
        cout << "Velociade Maxima: "<<velMax << " KM/H"<<endl;
        cout << "----------------------------------"<<endl;
    }
    //eu posso criar uma lista de metodos com os nomes iguais mais com parametros diferentes.
    //sobrecarga de metodos...
    Carro(){
        velMax=100;
        potencia=80;
        nome="Carro";
    }
    Carro(int pt, const char* nm):potencia(pt), nome(nm){
        if(pt < 100){
            velMax=120;
        }else if(pt<200){
            velMax=240;
        }else{
            velMax=360;
        }
    }
};

int main(){

    Carro c1;
    Carro c2{250, "Fuscao"};
    Carro c3{100, "Celta"};

    c1.imprimir();
    c2.imprimir();
    c3.imprimir();

    return 0;
}
