#ifndef HERANCA_H_INCLUDED
#define HERANCA_H_INCLUDED

class Veiculo{
public:
    int vel;
    int blind;
    int rodas;
    void setTipo(int tp);
    void setVelMax(int vm);
    void setArma(bool ar);
    void imprimir();
private:
    int tipo;//tipo1=Moto - tipo2=Carro - tipo3=Caminhao - tipo4=Tanque
    int velMax;
    bool arma;
};

void Veiculo::setTipo(int tp){
    tipo=tp;
};

void Veiculo::setVelMax(int vm){
    velMax = vm;
};

void Veiculo::setArma(bool ar){
    arma = ar;
}
void Veiculo::imprimir(){
    std::cout << "Tipo de veiculo: "<< tipo <<"\n";
    std::cout << "Velociade maxima: "<< velMax <<"\n";
    std::cout << "Rodas: "<< rodas <<"\n";
    std::cout << "Blindagem: "<< blind <<"\n";
    if(arma == false){
        std::cout << "Nao tem armamento\n";
    }else{
        std::cout << "Possui armamento\n";
    }
    std::cout << "..................................\n";
}

class Moto:public Veiculo{
public:
    Moto();
};

class Carro:public Veiculo{
public:
    Carro();
};

class Tanque:public Veiculo{
public:
    Tanque();
};

Moto::Moto(){
    vel=0;
    blind=0;
    rodas=2;
    setTipo(1);
    setVelMax(300);
    setArma(false);
}

Carro::Carro(){
    vel=0;
    blind=10;
    rodas=4;
    setTipo(2);
    setVelMax(280);
    setArma(true);
}

Tanque::Tanque(){
    vel=0;
    blind=100;
    rodas=8;
    setTipo(4);
    setVelMax(140);
    setArma(true);
}

#endif // HERANCA_H_INCLUDED
