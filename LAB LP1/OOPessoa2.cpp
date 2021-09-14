#include <iostream>
#include <string>

using namespace std;

class OOPessoa1{ //Declarando a classe pessoa
private:
    string nome;
    string telefone;
    int idade;
public:
    //seteres
    void setNome(string nome);
    void setTelefone(string telefone);
    void setIdade(int idade);
    //Geteres
    string getNome();
    string getTelefone();
    int getIdade();
    //Construtores
    OOPessoa1();
    OOPessoa1(string nome);
    OOPessoa1(string nome, string telefone, int idade);
};
void OOPessoa1::setNome(string nome){
    this->nome = nome;
}
void OOPessoa1::setTelefone(string telefone){
    this->telefone = telefone;
}
void OOPessoa1::setIdade(int idade){
    this->idade = idade;
}
string OOPessoa1::getNome(){
    return this->nome;
}
string OOPessoa1::getTelefone(){
    return this->telefone;
}
int OOPessoa1::getIdade(){
    return this->idade;
}
OOPessoa1::OOPessoa1(){

}
OOPessoa1::OOPessoa1(string nome){
    setNome(nome);
}
OOPessoa1::OOPessoa1(string nome, string telefone, int idade){
    setNome(nome);
    setTelefone(telefone);
    setIdade(idade);
}

int main(){

    int num;
    int age, i;
    string name, phone;
    
    cin >> num;

    OOPessoa1 agenda[num];

    for(i=0; i < num; i++){
        cin.ignore();
        getline(cin, name);
        cin >> age;
        cin.ignore();
        getline(cin, phone);

        agenda[i].setNome(name);
        agenda[i].setIdade(age);
        agenda[i].setTelefone(phone);
    }
    
    return 0;   
}