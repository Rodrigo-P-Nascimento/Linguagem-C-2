#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream arquivoSaida;

    arquivoSaida.open("aula-51-texto.txt");
    arquivoSaida << "Teste numero 1\n";
    arquivoSaida << "Teste numero 2\n";
    arquivoSaida << "Teste numero 3\n";
    arquivoSaida << "Teste numero 4\n";
    arquivoSaida << "Teste numero 5\n";
    arquivoSaida.close();

    ifstream arquivoEntrada;
    string linha;

    arquivoEntrada.open("aula-51-texto.txt");
    if(arquivoEntrada.is_open()){
        cout << "Arquivo aberto com sucesso\n";
        while(getline(arquivoEntrada, linha)){
            cout << linha << "\n";
        }
        arquivoEntrada.close();
    }else{
        cout <<"Arquivo nao foi aberto\n";
    }

	return 0;
}
