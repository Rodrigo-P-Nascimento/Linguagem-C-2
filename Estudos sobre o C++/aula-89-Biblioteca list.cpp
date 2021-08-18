#include <iostream>
#include <list>

using namespace std;

bool par(const int& num){
    return ((num %2) == 0);
}

int main(){

    list<int>lista1;
    list<int>lista2(10,0);//uma lista de 10 elementos todos zero
    list<int>lista3(lista2);
    list<char>lista4={'v','a','r','b'};

    /*
    cout << "Tamanho da lista 4: " <<lista4.size()<< endl;
    cout << "Tamanho MAXIMO da lista 4: " << lista4.max_size() << endl;

    lista4.emplace(lista4.begin(), 'd');
    lista4.emplace_back('w');
    lista4.emplace_front('z');

    lista4.sort();

    for(auto x:lista4){
        cout << x << " ";
    }
    */
    list <int>lista5={1,0,2,0,3,0,4,0,5,0};
    list <int>lista6={'a','b','c','d','e'};

    //lista5.remove(0);
    //lista5.remove_if(par);
    lista5.sort();
    lista5.unique();
    lista5.merge(lista6);

    for(auto x:lista5){
        cout << x << " ";
    }

    return 0;
}
