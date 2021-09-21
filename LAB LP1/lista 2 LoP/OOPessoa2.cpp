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
}//end Class OOPessoa2

int main(){

    int num;
    int age, i, cont=0;
    string name, phone, nomeProcurado;
    
    cin >> num;
    cin.ignore();

    OOPessoa1 agenda[num];

    for(i=0; i < num; i++){
        getline(cin, name);
        cin >> age;
        cin.ignore();
        getline(cin, phone);

        agenda[i] = OOPessoa1(name, phone, age);
    }

    getline(cin, nomeProcurado);
  
    for(i=0; i < num; i++){
        if(agenda[i].getNome().find(nomeProcurado) != string::npos){
            cont = 1;
            cout << agenda[i].getNome() << ", " << agenda[i].getIdade() << ", " << agenda[i].getTelefone() << endl;
        }
        if(i == (num-1) && cont == 0){
            cout <<  "Pessoa não encontrada" << endl;
        }
    }
    return 0;   
}//end main()