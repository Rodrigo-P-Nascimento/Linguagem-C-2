#include <iostream>
#include <string>

using namespace std;

class OOPessoa1{ //Declarando a classe pessoa

public:
    string nome;
    string telefone;
    int idade;

    OOPessoa1();
};

OOPessoa1::OOPessoa1(){
}

int main(){

    OOPessoa1 p1, p2;

    getline(cin, p1.nome); //Leitura da string com espaços
    cin >> p1.idade;
    cin.ignore();
    getline(cin, p1.telefone);

    getline(cin, p2.nome);
    cin >> p2.idade;
    cin.ignore();
    getline(cin, p2.telefone);

    cout << p1.nome << ", " << p1.idade << ", " << p1.telefone << endl;
    cout << p2.nome << ", " << p2.idade << ", " << p2.telefone << endl;

    return 0;   
}