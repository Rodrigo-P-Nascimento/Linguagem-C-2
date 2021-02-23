#include <iostream>

using namespace std;

class Veiculos{
private:
    const char* nome;
    const char*cor;
public:
    int velMax;
    int rodas;

    void setNome(const char* nm){
        nome=nm;
    }
    const char* getNome(){
        return nome;
    }
    void setCor(const char* co){
        cor=co;
    }
    const char* getCor(){
        return cor;
    }
    virtual void imp(){//esse metodo vai ser sobrescrito em alguma classe filha
        cout << "Nome:\t\t" << nome <<endl;
        cout << "Cor:\t\t" << cor<<endl;
        cout << "Rodas:\t\t" << rodas << endl;
        cout << "Vel Maxima:\t"<< velMax << " KM/H " <<endl;
        cout << "----------------------------------------\n";
    }
};

class Carro:public Veiculos{
public:
    Carro(){
        velMax=100;
        rodas=4;
        setCor("Preto");
        setNome("Carro");
    }
};

class Moto:public Veiculos{
public:
    Moto(){
        velMax=120;
        rodas=2;
        setCor("Vermelho");
        setNome("Moto");
    }
};

class Militar:public Veiculos{
public:
    int municao;
    bool armamento;
    Militar(int mu, bool arma):municao(mu), armamento(arma){
        velMax=80;
        rodas=6;
        setCor("Verde");
        setNome("Tanque de Guerra");
        if(arma){
            municao=mu;
        }else{
            municao=0;
        }
    }
    void imp()override {
        cout << "Nome:\t\t" << getNome()<<endl;
        cout << "Cor:\t\t" << getCor()<<endl;
        cout << "Rodas:\t\t" << rodas << endl;
        cout << "Vel Maxima:\t"<< velMax << " KM/H " <<endl;
        const char* res= (armamento) ? "SIM": "NAO";
        cout << "Armamento:\t"<< res << endl;
        cout << "Qnt de Municao:\t" << municao << endl;
        cout << "----------------------------------------\n";
    }

};


int main(){

    Carro c1;
    Moto m1;
    Militar t1{350, true};
    Militar t2{100, false};

    m1.imp();
    c1.imp();
    t1.imp();
    t2.imp();

    return 0;
}
