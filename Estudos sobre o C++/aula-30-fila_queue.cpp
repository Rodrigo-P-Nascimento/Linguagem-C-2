#include <iostream>
#include <queue>

using namespace std;

/*

Filas sao abertas dos dois lados

.empty
.size
.front - mostra o primeiro elemento adicionado na fila
.back  - mostra a o ultimo elemento adicionado na fila
.push
pop - vai apagar o primeiro elemento adicionado na fila
*/

int main(){

    queue <string> cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    //cout << "Tamanho da fila: "<< cartas.size() << "\n";
    //cout << "Primeira carta da fila: " << cartas.front() << "\n";
    //cout << "Ultima carta da fila: " << cartas.back() << "\n";

    while(!cartas.empty()){
        cout << "Primeira carta da fila: " << cartas.front() << "\n";
        cartas.pop();
    }

	return 0;
}
