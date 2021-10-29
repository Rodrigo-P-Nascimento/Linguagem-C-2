#include <iostream>
#include <fstream>

using namespace std;

int main(){
    /*
    ofstream arquivo;
    arquivo.open("arquivo.txt", ios::out);

    //ofstream arq = ofstream("arquivo1.txt", ios::out);

    if(!arquivo.is_open()){
        cout << "Não foi possivél abrir esse arquivo!" << endl;
    }else{
        cout << "Arquivo aberto com sucesso!" << endl;
    }

    arquivo << "Ola mundo!";

    arquivo.close();
    */

    ifstream arquivo;
    arquivo.open("arquivo.txt", ios::in);

    if(!arquivo.is_open()){
        cout << "Não foi possivél abrir esse arquivo!" << endl;
    }else{
        cout << "Arquivo aberto com sucesso!" << endl;
    }

    string frase;

    while(getline(arquivo, frase)){
        cout << frase << endl;
    }

    arquivo.close();

    return 0;
}