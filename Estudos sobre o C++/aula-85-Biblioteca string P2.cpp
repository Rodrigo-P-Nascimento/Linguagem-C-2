#include <iostream>
#include <string>
using namespace std;

int main(){

    string txt("Teste de string");
    int tam=txt.size();

    /*
    for(int i=0;i<tam;i++){
        cout << txt.at(i);
    }

    cout << endl;
    cout <<"Ultima letra: " << txt.back() << "\nPrimeiro elemento: "<<txt.front() << endl;

    txt.front() = 'F';
    txt.back() = 'e';
    cout <<"Ultima letra: " << txt.back() << "\nPrimeiro elemento: "<<txt.front() << endl;
    */

    txt+=" - Teste da string 2";
    txt.assign("Substituto");



    cout << txt;

    return 0;
}
