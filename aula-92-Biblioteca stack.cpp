#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<int>pilha1,pilha2;

    pilha1.push(12);pilha1.push(23);pilha1.push(9);
    pilha2.push(2);pilha2.push(3);pilha2.push(6);

    while(!pilha1.empty()){
        cout << pilha1.top() <<endl;
        pilha1.pop();
    }

    if(pilha1.empty()){
        cout << "\nPilha esta vazia\n";
    }else{
        cout << "\nPilha nao esta vazia\n";
    }


    return 0;
}
