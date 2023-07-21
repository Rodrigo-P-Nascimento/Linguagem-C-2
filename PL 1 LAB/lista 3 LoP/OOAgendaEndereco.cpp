#include <iostream>

using namespace std;

class Endereco{
private:
    string rua;
    string numero;
    string bairro;
    string cidade;
    string estado;
    string cep;
public:
    //Construtores
    Endereco(string rua, string numero, string bairro, string cidade, string estado, string cep);
    Endereco();
    //Metodos
    string toString();
    
};
string Endereco::toString(){
    string s;
    s = rua;
    s += ", ";
    s += numero;
    s += ", ";
    s += bairro;
    s += ". ";
    s += cidade;
    s += " - ";
    s += estado;
    s += ". CEP: ";
    s += cep;

    return s;
}
Endereco::Endereco(string rua, string numero, string bairro, string cidade, string estado, string cep){
    this->rua = rua;
    this->numero = numero;
    this->bairro = bairro;
    this->cidade = cidade;
    this->estado = estado;
    this->cep = cep;
}

Endereco::Endereco(){
}
//end class Endereco

class Pessoa{
private:
    string nome;
    Endereco endereco;
    string telefone;
public:
    //setters
    void setNome(string nome);
    void setEndereco(Endereco endereco);
    void setTelefone(string telefone);
    //getters
    string getNome();
    Endereco getEndereco();
    string getTelefone();
    //Metodo
    string toString();
    //Construtores
    Pessoa();
    Pessoa(string nome);
    Pessoa(string nome, Endereco endereco, string telefone);
    
};
// ___ setters ___
void Pessoa::setNome(string nome){
    this->nome = nome;
}
void Pessoa::setEndereco(Endereco endereco){
    this->endereco = endereco;
}
void Pessoa::setTelefone(string telefone){
    this->telefone = telefone;
}
// ___ getters ___
string Pessoa::getNome(){
    return nome;
}
Endereco Pessoa::getEndereco(){
    return endereco;
}
string Pessoa::getTelefone(){
    return telefone;
}
// ___ Metodo ___
string Pessoa::toString(){
    string s;
    s = nome;
    s += ", ";
    s += telefone;

    return s;
}
// ___ construtores ___
Pessoa::Pessoa(){
}

Pessoa::Pessoa(string nome){
    this->nome = nome;
}
Pessoa::Pessoa(string nome, Endereco endereco, string telefone){
    this->nome = nome;
    this->endereco = endereco;
    this->telefone = telefone;
}
//end class Pessoa

int main(){

    string rua;
    string numero;
    string bairro;
    string cidade;
    string estado;
    string cep;
    string nome;
    string telefone;

    int num;

    cin >> num;

    Pessoa pessoa[num];
    Endereco endereco[num];
    cin.ignore();

    for(int i=0; i < num; i++){
        getline(cin, nome);
        getline(cin, telefone);
        getline(cin, rua);
        getline(cin, numero);
        getline(cin, bairro);
        getline(cin, cidade);
        getline(cin, estado);
        getline(cin, cep);

        endereco[i] = Endereco(rua, numero, bairro, cidade, estado, cep);
        pessoa[i] = Pessoa(nome, endereco[i], telefone);

    }   

    for(int i=0; i  <num; i++){
        cout << pessoa[i].toString() << endl;
        cout << endereco[i].toString() << endl;
        cout << "\n";
    }

    return 0;
}