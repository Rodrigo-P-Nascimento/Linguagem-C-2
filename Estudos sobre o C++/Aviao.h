#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao{

public:
    int velocidade=0;
    int velMax;
    std::string tipo;
    Aviao(int tp);
    void imprimir();
private:

};

Aviao::Aviao(int tp){

    if(tp == 1){
        tipo = "Jato";
        velMax = 800;
    }else if(tp==2){
        tipo = "Monomotor";
        velMax = 350;
    }else if(tp==3){
        tipo = "Planador";
        velMax = 180;
    }
}

void Aviao::imprimir(){
    std::cout << "Tipo do aviao: "<< tipo << "\n";
    std::cout << "Velocidade maxima: "<< velMax << "km/h" << "\n";
    std::cout << "Velocidade atual: "<< velocidade << "km/h"<< "\n";
    std::cout << "..........................................." << "\n";

}

#endif // AVIAO_H_INCLUDED
