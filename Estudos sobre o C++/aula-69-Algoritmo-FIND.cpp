#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main(){
    /*
    //find (inicio, fim, valor a ser procurado)
    int vetor[]{18,24,56,2,8,9,1};
    int *p;
    size_t tam=sizeof vetor/4;
    p=find(vetor, vetor+tam, 1);

    if(p!= vetor+tam){
        cout << "Numeral encontrado: " << *p <<endl;
    }else{
        cout << "Numeral NAO encontrado\n";
    }
    */
    /*
    vector<int>num={18,24,56,2,8,9,1};
    auto it= find(num.begin(), num.end(), 5);
    if(it!=num.end()){
        cout << "Numeral encontrado: " << *it <<endl;
    }else{
        cout << "Numeral NAO encontrado\n";
    }
    */
    list<int>num={18,24,56,2,8,9,1};
    auto it= find(num.begin(), num.end(), 18);
    if(it!=num.end()){
        cout << "Numeral encontrado: " << *it <<endl;
    }else{
        cout << "Numeral NAO encontrado\n";
    }

    return 0;
}
