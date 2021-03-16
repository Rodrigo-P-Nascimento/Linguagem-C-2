#include <iostream>
#include <deque>//FILA DUPLA

using namespace std;

void linha(int tam, string txt);
void impd(deque<int> d);

int main(){

    deque<int>dq1;
    deque<int>dq2(10,5);//10 numerais cinco
    deque<int>dq3(dq2);
    deque<int>dq4={0,1,2,3,4,5,6,7,8,9};

    //tu pode usar o iterator com o deque mano

    linha(50, "Capacidade");
    cout << "Tamanho atual: " <<dq4.size() << endl;
    cout << "Capacidade maxima: " << dq4.max_size() << endl;



    return 0;
}

void linha(int tam, string txt){
    cout << "\n-- " << txt << " ";
    for(int i=0;i<tam;i++){
        cout << "-";
    }
    cout << endl << endl;
}

void impd(deque<int>d){
    for(auto x:d){
        cout << x << "   ";
    }
}
