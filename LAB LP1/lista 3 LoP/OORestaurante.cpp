#include <iostream>

using namespace std;

class Pedido{
private:
    int numero;
    string descricao;
    int quantidade;
    float preco;
public:
    //Construtor
    Pedido(int numero, string descricao, int quantidade, float preco);
    //getters
    float getTotal();
    int getNumero();
    string getDescricao();
    int getQuantidade();
    float getPreco();
    //setters
    void setQuantidade(int quantidade);

};
//   ___ get ___
float Pedido::getTotal(){
    return (preco * quantidade);
}
int Pedido::getNumero(){
    return numero;
}
string Pedido::getDescricao(){
    return descricao;
}
int Pedido::getQuantidade(){
    return quantidade;
}
float Pedido::getPreco(){
    return preco;
}
//   ___ set ___
void Pedido::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}
//   ___ construtor ___
Pedido::Pedido(int numero, string descricao, int quantidade, float preco){
    this->numero = numero;
    this->descricao = descricao;
    this->quantidade = quantidade;
    this->preco = preco;    
}//end class Pedido

class MesaDeRestaurante{
private:
    Pedido Mesa[100];
public:
    //Metodos
    void adicionarPedido(Pedido p);
    void zeraPedidos();
    float calculaTotal();
    void exibeConta();
    //Construtor
    MesaDeRestaurante();


};
void MesaDeRestaurante::adicionarPedido(Pedido p){
    bool existePedido=false;

    for(int i=0; i < 100; i++){
        if(Mesa[i].getDescricao() == p.getDescricao() && Mesa[i].getNumero() == p.getNumero()){
            Mesa[i].setQuantidade(Mesa[i].getQuantidade()+ p.getQuantidade());
            existePedido = true;
            break;
        }
    }
    if(!existePedido){
        for(int i=0; i < 100; i++){
            if(Mesa[i].getDescricao() != p.getDescricao()){
                Mesa[i] = p;
            }
        }
    }
}

void MesaDeRestaurante::zeraPedidos(){
    for(int i=0; i < 100; i++){
        Mesa[i].setQuantidade(0);
    }
}

float MesaDeRestaurante::calculaTotal(){
    float contaMesa=0;

    for(int i=0; i < 100; i++){
        contaMesa += Mesa[i].getTotal();
    }
    
    return contaMesa;
}

void MesaDeRestaurante::exibeConta(){
    //Falta
}

MesaDeRestaurante::MesaDeRestaurante(){
}//End class MesaDeRestaurante

class Restaurante{
private:
    MesaDeRestaurante rest[100];
public:
    //Metodos
    void adicionarPedido(Pedido p, int mesa);
    float calculaTotalRestaurante();

    //Construtor;
    Restaurante();
  
};
void Restaurante::adicionarPedido(Pedido p, int mesa){

    for(int i=0; i < 100; i++){
        if(i == mesa){
            rest[i].adicionarPedido(p);
        }
    }
}

float Restaurante::calculaTotalRestaurante(){
    float total=0;

    for(int i=0; i < 100; i++){
        total += rest[i].calculaTotal();
    }
}

Restaurante::Restaurante(){
}






int main(){





    return 0;
}