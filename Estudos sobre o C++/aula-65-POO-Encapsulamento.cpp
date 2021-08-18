#include <iostream>
#include <memory>
/*
Usar o setVelMax nao eh mais uma obrigacao voce pode simplismente mudar as variaveis normalmente
ate pq DENTRO da classe vc pode utilizar, alterar, etc normalmente.

Mas se quiser usar o set, use-o dentro de private.
*/

class Carro{
private:
    int velMax;
    void setVelMax(int vm){
        velMax = vm;
    }

public:

    int potencia;
    const char* nome;

    int getVelMax(){
        return velMax;
    }

    Carro(const char* n, int p):nome(n), potencia(p){
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
    cout << c1->nome << " - " <<c1->potencia<< " - "<< c1->getVelMax()<< endl;

    Carro c2{"Marquinhos", 999};
    cout <<c2.nome<<" - "<<c2.potencia<<" - "<<c2.getVelMax()<<endl;

    return 0;
}
