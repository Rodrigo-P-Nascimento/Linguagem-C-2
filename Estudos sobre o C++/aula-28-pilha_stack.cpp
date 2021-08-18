#include <iostream>
#include <stack>

using namespace std;
/*

O ultimo elemento colocado na pilha eh o ultimo a ser removido da pilha

.push - adiciona elementos na pilha
.pop  - apaga o ultimo elemento da pilha
.size - mostra a quantidade de elementos da pilha
.empty- retorna TRUE ou FALSE, ou seja, se tiver algo na pilha retorna TRUE se nao FALSE
.top  - retorna o ultimo elemento adicionado na pilha
*/
int main(){

    stack <string> cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da pilha: "<< cartas.size() << "\n";
    cout << "Carta do topo: " <<cartas.top() << "\n";

    cartas.pop();

    if(cartas.empty()){
        cout << "A pilha esta vazia!\n";
    }else{
        cout << "A pilha nao esta vazia!\n";
        cout << "Tamanho da pilha: "<< cartas.size() << "\n";
    }
	return 0;
}
