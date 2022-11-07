#include <iostream>
#include <stack>

using namespace std;

int findMin(stack <int> &stc){//Função que vai calcular o valor minimo da pilha
    int min, tam;
    stack <int> aux = stc;

    tam = stc.size();
    for(int i=0; i < tam; i++){
        if(min > aux.top()){
            min = aux.top();
        }

        aux.pop();
    }

    return min;
}

int main(){

    int n, num; //quantidade de valores a serem lidos
    stack <int> pilha;
    string entrada;

    cin >> n;

    while (n){
        
        cin >> entrada;//Vamos ler a entrada

        if(entrada == "PUSH"){
            cin >> num;//adiciona o valor no topo da fila
            pilha.push(num);
        }else if(entrada == "MIN"){
            if(pilha.empty()){
                cout << "EMPTY" << endl;
            }else{
                cout << findMin(pilha) << endl;
            }
        }else if(entrada == "POP"){
            if(pilha.empty()){
                cout << "EMPTY" << endl;
            }else{
                pilha.pop();//apaga um elemento da pilha
            }
        }
        n--;
    }
    return 0;
}