#include <iostream>
#include <fstream>

using namespace std;

int main(){

    //ofstream(sai do pc e entra no arquivo), ifstream(sai do arquivo e entra no arquivo)
    //e fstream(entrada ou saida)
    //o- de saida e i- de entrada

    ofstream arquivo;

    arquivo.open("aula-50-texto.txt");

    arquivo << "Teste numero 1";

	return 0;
}
