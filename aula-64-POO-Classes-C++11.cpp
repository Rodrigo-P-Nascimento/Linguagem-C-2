#include <iostream>
#include <memory>

class Carro{
public:
    int velMax;
    int potencia;
    const char* nome;

    Carro(const char* n, int p):nome(n), potencia(p){//lista de inicializacao
        if(p<100){
            velMax = 120;
        }else if(p<200){
            velMax=220;
        }else{
            velMax=320;
        }
    }
};

using namespace std;

int main(){

    unique_ptr<Carro>c1(new Carro{"Fuscao", 90});
    cout << c1->nome << " - " <<c1->potencia<< " - "<< c1->velMax<< endl;

    Carro c2{"Marquinhos", 999};
    cout <<c2.nome<<" - "<<c2.potencia<<" - "<<c2.velMax<<endl;

    return 0;
}
