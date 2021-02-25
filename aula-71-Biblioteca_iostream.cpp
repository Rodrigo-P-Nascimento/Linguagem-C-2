#include <iostream>
//Ela define o fluxo de entrada e saida de dados
using namespace std;

int main(){

    //cin - cout - cerr
    /*
    cin->   Entrada de dados;
    cout->  Imprime dados
    cerr->
    get()-> ler caracteres
    getline()->le linhas inteiras, usado em arquivos
    gcount()->retorna o numero de caracteres digitados no getline e no get, teste!
    ignore()-> ignora um tipo de caractere
    */

     //char nome[10];
     //cin.get(nome, 10);
     //cout <<"|"<< nome <<"| Tamanho: "<< cin.gcount()<<endl;

     char primeiro;
     char segundo;

     primeiro= cin.get();
     cin.ignore(80, ' ');
     segundo= cin.get();

     cout << "NOME: "<< primeiro << "|" << segundo << endl;


    return 0;
}
