#include <iostream>
#include <list>

using namespace std;

int main(){

    list <int> aula;
    int tam=10;
    list<int>::iterator it;

    for(int i=0; i < tam; i++){
        aula.push_front(i);
    }

    it = aula.begin();
    advance(it, 3);
    aula.insert(it, 90);

    //aula.erase(--it);
    //aula.clear();

    cout << "Tamanho da lista: " <<aula.size() <<"\n";

    tam=aula.size();

    for(int i=0; i < tam; i++){
            cout << aula.front() <<"\n";
            aula.pop_front();
        }


    /*
    list <int> lista1(5);
    list <int> lista2(5);

    lista1.push_back(12);
    lista1.push_back(3);
    lista1.push_back(5);
    lista1.push_back(67);
    lista1.push_back(0);

    lista2.push_back(2);
    lista2.push_back(32);
    lista2.push_back(99);
    lista2.push_back(44);
    lista2.push_back(6);

    lista1.merge(lista2);
    lista1.sort();

    int sise = 10;
    for(int i=0; i < sise; i++){
            cout << lista1.back() <<"\n";
            lista1.pop_back();
        }
    */
	return 0;
}
