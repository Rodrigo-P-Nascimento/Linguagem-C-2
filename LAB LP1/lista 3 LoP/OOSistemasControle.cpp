#include <iostream>

using namespace std;

class Pagamento{
private:
    float valorPagamento;
    string nomeDoFuncionario;
public:
    //setters
    void setValorPagamento(float valorPagamento);    
    void setNomeDoFuncionario(string nomeDoFuncionario);
    //getters
    float getValorPagamento();
    string getNomeDoFuncionario();
    //Metodsos
    Pagamento();
};
//  ___setters___
void Pagamento::setValorPagamento(float valorPagamento){
    this->valorPagamento = valorPagamento;
}    
void Pagamento::setNomeDoFuncionario(string nomeDoFuncionario){
    this->nomeDoFuncionario = nomeDoFuncionario;
}
//  ___getters___
float Pagamento::getValorPagamento(){
    return this->valorPagamento;
}
string Pagamento::getNomeDoFuncionario(){
    return this->nomeDoFuncionario;
}
Pagamento::Pagamento(){
    this->valorPagamento = 0;
}
//end class Pagamento

class ControleDePagamentos{
private:
    Pagamento pagamentos[100];
public:
    void setPagamento(Pagamento p, int index);
    Pagamento getPagamento(int pos);
    float calculaTotalDePagamentos();
    int getIndexFuncionario(string nomeFuncionario);

    ControleDePagamentos();
};
//   ___Metodos___
void ControleDePagamentos::setPagamento(Pagamento p, int index){
    pagamentos[index] = p;
}
Pagamento ControleDePagamentos::getPagamento(int pos){
    return pagamentos[pos];
}
float ControleDePagamentos::calculaTotalDePagamentos(){
    float total=0;

    for(int i=0; i < 100; i++){
        total+=pagamentos[i].getValorPagamento();
    }

    return total;
}

int ControleDePagamentos::getIndexFuncionario(string nomeFuncionario){

    for(int i=0; i < 100; i++){
        if(pagamentos[i].getNomeDoFuncionario().find(nomeFuncionario) != string::npos){
            return i;
        }
    }

    return -1;
}
ControleDePagamentos::ControleDePagamentos(){
}
//End class ControleDePagamentos

int main(){

    ControleDePagamentos cp;  
    Pagamento pg; 
    int numFunc;
    float auxValue;
    string auxName;

    cin >> numFunc;

    for(int i=0; i < numFunc; i++){
        cin >> auxValue;
        cin.ignore();
        getline(cin, auxName);

        pg.setNomeDoFuncionario(auxName);
        pg.setValorPagamento(auxValue);

        cp.setPagamento(pg, i);
    }

    getline(cin, auxName);

    if(cp.getIndexFuncionario(auxName) != -1){
        pg = cp.getPagamento(cp.getIndexFuncionario(auxName));
        cout << pg.getNomeDoFuncionario() << ": R$ " << pg.getValorPagamento() << endl;
        cout << "Total: R$ " << cp.calculaTotalDePagamentos() << endl;
    }else{
        cout << auxName << " não encontrado(a)." << endl;
        cout << "Total: R$ " << cp.calculaTotalDePagamentos() << endl;
    }

    return 0;
}