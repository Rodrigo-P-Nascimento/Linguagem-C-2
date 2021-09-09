#include <iostream>
#include <string>

using namespace std;

class Invoice{

private:
    int numero;
    string descricao;
    int quant;
    float preco;
public:
    //Construtor
    Invoice(int numero, string desc, int quant, float preco);
    //Seteres
    void setNumero(int numero);
    void setDescricao(string descricao);
    void setQuant(int quant);
    void setPreco(float preco);
    //Geteres
    int getNumero();
    string getDescricao();
    int getQuant();
    float getPreco();
    //Metodos
    float getInvoiceAmount(float preco, int quant);
    void printfInvoice();

};

Invoice::Invoice(int numero, string des, int quant, float preco){

   this->numero = numero;
   this->descricao = des;
   this->quant = quant;
   this->preco = preco;

   if(quant <= 0){
       this->quant = 0;
   }
   if(preco <= 0 ){
       this->preco = 0.0;
   }
}
float Invoice::getInvoiceAmount(float preco, int quant){
    return (preco * quant);
}

void Invoice::setNumero(int numero){
    this->numero = numero;
}
void Invoice::setDescricao(string descricao){
    this->descricao = descricao;
}
void Invoice::setQuant(int quant){
    this->quant = quant;
}
void Invoice::setPreco(float preco){
    this->preco = preco;
}

int Invoice::getNumero(){
    return this->numero;
}
string Invoice::getDescricao(){
    return this->descricao;
}
int Invoice::getQuant(){
    return this->quant;
}
float Invoice::getPreco(){
    return this->preco;
}

void Invoice::printfInvoice(){
    cout << getNumero() << " - " << getDescricao() << " - " << getQuant() << " - " << getPreco() << " - " << getInvoiceAmount(getPreco(), getQuant()) << endl;
}

int main(){

    int num, quant;
    float pre;
    string des;

    cin >> num;
    cin.ignore();
    getline(cin, des);
    cin >> quant;
    cin >> pre;

    Invoice ft1 = Invoice(num, des, quant, pre);
    
    cin >> num;
    cin.ignore();
    getline(cin, des);
    cin >> quant;
    cin >> pre;

    Invoice ft2 = Invoice(num, des, quant, pre);

    ft1.printfInvoice();
    ft2.printfInvoice();

    return 0;
}