#include <iostream>
#include <array>
using namespace std;

int main(){

    array<int,10> vt={2,3,4,5,67,90,4,1,2,34};
    array<int,10> vt2;
    /*
    for(auto it=vt.begin();it!=vt.end();it++){
        //cout << *it << endl;
    }
    cout << endl;
    for(auto it=vt.rbegin();it!=vt.rend();it++){
        //cout << *it << endl;
    }

    cout << "Tamanho do array: " << vt.size() << endl;
    cout << "Tamanho maximo do array: " << vt.max_size() << endl;

    if(vt.empty()){
        cout << "Array esta vazio\n";
    }else{
        cout << "Array nao esta vazio\n";
    }
    */
    //cout << "Elemento na posicao 5: " << vt.at(4) << endl;
    //cout << "Primeiro elemento do array: "<< vt.front()<< "\nUltimo elemenot do array: "<< vt.back()<< endl;

    vt2.fill(10);//preenche todo o arrar com o valor no parametro
    vt.swap(vt2);

    for(auto x:vt){
        cout << x << " ";
    }
    cout << endl;

    for(auto x:vt2){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
