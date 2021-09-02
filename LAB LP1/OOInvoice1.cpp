#include <iostream>
#include <string>

using namespace std;

class Invoice{

public:
   
    int numero;
    string descricao;
    int quant;
    float preco;

    Invoice();
    float getInvoiceAmount(float preco, int quant);

};

Invoice::Invoice(){
}
float Invoice::getInvoiceAmount(float preco, int quant){
    return (preco * quant);
}

int main(){

    Invoice ft1, ft2;

    cin >> ft1.numero;
    cin.ignore();
    getline(cin, ft1.descricao);
    cin >> ft1.quant;
    cin >> ft1.preco;

    if(ft1.quant < 0) ft1.quant = 0;
    if(ft1.preco < 0) ft1.preco = 0;

    cin >> ft2.numero;
    cin.ignore();
    getline(cin, ft2.descricao);
    cin >> ft2.quant;
    cin >> ft2.preco;

    if(ft2.quant < 0) ft2.quant = 0;
    if(ft2.preco < 0) ft2.preco = 0;

    cout << ft1.numero << " - " << ft1.descricao << " - " << ft1.quant << " - " << ft1.preco << " - " << ft1.getInvoiceAmount(ft1.preco, ft1.quant) << endl;
    cout << ft2.numero << " - " << ft2.descricao << " - " << ft2.quant << " - " << ft2.preco << " - " << ft2.getInvoiceAmount(ft2.preco, ft2.quant) << endl;

    return 0;
}