#include <iostream>
#include <fstream>
using namespace std;

int main(){

    fstream arquivo;
    char opc ='s';
    string nome, linha;

    arquivo.open("aula-52-texto.txt", ios::out|ios::app);

    while((opc== 's' || opc=='S')){
        cout << "Digite um nome ae: ";
        cin >> nome;
        arquivo << nome << "\n";
        cout << "Digitar um novo nome[s/n]: ";
        cin >> opc;
    }
    arquivo.close();

    arquivo.open("aula-52-texto.txt", ios::in);

    cout << "Nomes digitados ate agora\n";

    if(arquivo.is_open()){
        cout << "\nArquivo existente\n";
        while(getline(arquivo, linha)){
            cout << linha << "\n";
        }
    }else{
        cout << "Arquivo inexistente\n";
    }
    arquivo.close();
    return 0;
}
