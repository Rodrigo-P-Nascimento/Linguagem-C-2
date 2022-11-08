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

.686
.model flat, stdcall
option casemap :none
include \masm32\include\windows.inc
include \masm32\include\kernel32.inc
include \masm32\include\user32.inc
includelib \masm32\lib\kernel32.lib
includelib \masm32\lib\user32.lib

.data
    HelloWorld db "Hello World!", 0

.code
start:
    invoke MessageBox, NULL, addr HelloWorld, addr HelloWorld, MB_OK
    invoke ExitProcess, 0
end start
