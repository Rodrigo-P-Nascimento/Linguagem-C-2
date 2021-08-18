#include <iostream>

using namespace std;

class Aviao{

public:
    int velocidade=0;
    int velMax;
    string tipo;
    void ini(int tp);

private:

};

void Aviao::ini(int tp){//tipo1=Jato   tipo2=Monomotor  tipo3=Planador
    if(tp == 1){
        this->velMax=800;
        this->tipo="Jato";
    }else if(tp == 2){
        this->velMax=350;
        this->tipo="Monomotor";
    }else if(tp == 3){
        this->velMax=180;
        this->tipo="Planador";
    }

}


int main(){

    Aviao *avi=new Aviao();
    Aviao *avi2=new Aviao();

    avi->ini(3);
    avi2->ini(2);
    avi->velocidade = 100;
    avi2->velocidade = 200;

    cout << avi->velocidade<<endl;
    cout << avi->tipo<<endl;
    cout << avi->velMax<<endl;
    cout << avi2->velocidade<<endl;
    cout << avi2->tipo<<endl;
    cout << avi2->velMax<<endl;


	return 0;
}
