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
    Pedido();
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
Pedido::Pedido(){
    numero = 0;
    descricao = "0";
    quantidade = 0;
    preco = 0;
}
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
            if(Mesa[i].getDescricao() == "0"){
                Mesa[i] = p;
                break;
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
   for(int i=0; i < 100; i++){
       if(Mesa[i].getPreco() > 0){
           cout <<  Mesa[i].getNumero() << " - " << Mesa[i].getDescricao() << " - " << Mesa[i].getQuantidade() << " - " << Mesa[i].getPreco() << " - R$ " << Mesa[i].getTotal() << endl;
       }

   }
}

MesaDeRestaurante::MesaDeRestaurante(){
}//End class MesaDeRestaurante

class Restaurante{
public:
    MesaDeRestaurante rest[100];
    //Metodos
    void adicionarPedido(Pedido p, int mesa);
    float calculaTotalRestaurante();
    MesaDeRestaurante getMesa(int mesa);
    //Construtor;
    Restaurante();
  
};
void Restaurante::adicionarPedido(Pedido p, int mesa){

    for(int i=0; i < 100; i++){
        if(i == mesa){
            rest[i].adicionarPedido(p);
            break;
        }
    }
}

float Restaurante::calculaTotalRestaurante(){
    float total=0;

    for(int i=0; i < 100; i++){
        total += rest[i].calculaTotal();
    }

    return total;
}

MesaDeRestaurante Restaurante::getMesa(int mesa){
    return rest[mesa];
}

Restaurante::Restaurante(){
}

int main(){
    Pedido p;
    Restaurante res;
    MesaDeRestaurante mesa;

    int numero=1;
    int indiceMesa;
    string descricao;
    int quantidade;
    float preco;

    while (numero){
        cin >> numero;
        if(numero <= 0){
            break;
        }
        cin.ignore();
        getline(cin, descricao);
        cin >> quantidade;
        cin >> preco;
        cin >> indiceMesa;

        p = Pedido(numero, descricao, quantidade, preco);
        res.adicionarPedido(p, indiceMesa);
    }
    
    for(int i =0; i < 100; i++){
        
        mesa = res.getMesa(i);
        if(mesa.calculaTotal() > 0.00){
            cout << "Mesa " << i << endl;
            mesa.exibeConta();
            cout << "Total: R$ " << mesa.calculaTotal() << endl;
            cout << "\n";
        }
    }

    cout << "Total Restaurante: R$ " << res.calculaTotalRestaurante() << endl;

    return 0;
}