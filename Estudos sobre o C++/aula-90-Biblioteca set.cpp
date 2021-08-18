#include <iostream>
#include <set>

using namespace std;

int main(){
    //nao permite valores duplicados e eles estam sempre ordenados
    set<int>st1={3,5,12,4,6,8,8,7,0};

    st1.emplace_hint(st1.begin(), 10);//se ja tiver o 10 no set ele nao coloca
    st1.emplace(10);//se ja tiver o 10 no set ele nao coloca

    for(auto x:st1){
        cout << x << " ";
    }
    cout << endl;

    if(st1.count(5) != 0){
        cout << "5-Esta no conteiner\n";
    }else{
        cout << "5-Nao esta no conteiner\n";
    }


    return 0;
}
