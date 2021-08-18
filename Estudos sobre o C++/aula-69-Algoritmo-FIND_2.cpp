#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    /*
    map<char, int>mapa;
    mapa['a'] = 10;
    mapa['b'] = 20;
    mapa['c'] = 30;
    mapa['d'] = 40;
    mapa['e'] = 50;

    auto it=mapa.find('a');

    if(it!=mapa.end()){
        cout << "Chave encontrada " << it->second <<endl;
    }else{
        cout << "Chave NAO encontrada\n";
    }
    */
    string texto="FREFAS - Melhor time do Mucambo";
    size_t it=texto.find("igor");

    if(it!=string::npos){
        cout << "Palavra encontrada na posicap: "<< it << endl;
    }else{
        cout << "Palavra NAO encontrada\n";
    }



    return 0;
}
