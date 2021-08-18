#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<int>fila;

    fila.push(1);
    fila.push(2);
    fila.push(3);
    fila.emplace(4);
    fila.emplace(5);
    fila.emplace(6);

    cout << "Primeiro elemento da fila: " << fila.front() << endl;
    cout << "Ultimo elemento da fila: " << fila.back() << endl;
    cout << "\nTamanho da fila: " << fila.size() << endl;
    cout << endl;

    while(!fila.empty()){
        cout << fila.front() << " - ";
        fila.pop();
    }
    cout << endl;
    if(fila.empty()){
        cout << "A fila esta vazia\n";
    }else{
        cout << "A fila NAO esta vazia\n";
    }

    return 0;
}
