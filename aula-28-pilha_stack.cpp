#include <iostream>
#include <stack>

using namespace std;
//o ultimo elemento colocado na pilha eh o ultimo a ser removido da pilha
int main(){

    stack <string> cartas;

    //o metodo push adiciona elementos na pilha
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da pilha: "<< cartas.size() << "\n";

    cout << "Carta do topo: " <<cartas.top() << "\n"; //top mostra o ultimo elemento adicionado na pilha

    cartas.pop();//metodo pop faz a retirada do ultimo elemento adicionado

    //cout << "Carta do topo: " <<cartas.top() << "\n";



	return 0;
}
