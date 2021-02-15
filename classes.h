#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo{
public:
    int vel;
    int tipo;
    Veiculo(int tipo_de_veiculo);
    int getVelMax();//os geteres podem ir no dados privados e mostra-los, ok
    void setVelMax(int vm);//os seteres podem alterar os valores privados

private://tudo dentro de public so pode ser manipulado dentro da classe
    std::string nome;
    int velMax;
    bool ligado;
};



int Veiculo::getVelMax(){
    return velMax;
}

void Veiculo::setVelMax(int vm){
    velMax = vm;
}

Veiculo::Veiculo(int tipo_de_veiculo){//tipo1: carro - tipo2: aviao - tipo3: navio
    tipo = tipo_de_veiculo;
    if(tipo== 1){
        nome = "Carro";
        velMax = 250;
    }else if(tipo == 2){
        nome = "Aviao";
        velMax = 800;
    }else if(tipo == 3){
        nome = "Navio";
        velMax = 120;

    }

}

#endif // CLASSES_H_INCLUDED
