#include <iostream>
#include <fstream>

using namespace std;

int main(){

    //ofstream(sai do pc e entra no arquivo), ifstream(sai do arquivo e entra no arquivo)
    //e fstream(entrada ou saida)
    //o- de saida e i- de entrada

    ofstream arquivo;

    arquivo.open("aula-50-texto.txt");
    arquivo << "Teste numero 1\n";
    arquivo.close();

    /*
    Oh se liga, toda vez que vc abrir o arquivo txt e mandar algo escrever nele,
    o programa vai sobrescrever o que ja tem no arquivo.

    Pra deixar oq ja foi escrito nele basta colocar um parametro no metodo open()
    open(nome_do_arquivo, ios::app);

    No caso ele muda o cursor para o final do arquivo blz
    */

    arquivo.open("aula-50-texto.txt", ios::app);
    //arquivo << "Teste numero 3\n";
    //arquivo << "Teste numero 4\n";
    //arquivo << "Teste numero 5\n";
    arquivo.close();

	return 0;
}
