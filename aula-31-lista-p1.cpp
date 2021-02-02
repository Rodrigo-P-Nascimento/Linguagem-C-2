#include <iostream>
#include <list>

using namespace std;

int main(){

    //list <int> aula(10); lista com 10 posicoes
    //list <int> aula(5, 10); lista com 5 posicoes e em cada uma delas tem o valor 10
    // list <int> aula, canal, teste;  declarar listas do mesmo tipo
    list <int> aula;
    list <int>::iterator it;

    int tam=10;
    for(int i=0; i < tam; i++){
        aula.push_front(i);
        //aula.push_back(i);

    }
    /*
    it = aula.begin();
    advance(it, 5);
    aula.insert(it, 0);
    */
    tam=aula.size();

    cout << "Tamanho da lista: " <<aula.size() <<"\n";

    aula.sort();
    aula.reverse();

    for(int i=0; i < tam; i++){
            cout << aula.front() <<"\n";
            aula.pop_front();
        }

	return 0;
}
