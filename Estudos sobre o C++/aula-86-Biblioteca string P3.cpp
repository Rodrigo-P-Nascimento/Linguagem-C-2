#include <iostream>

using namespace std;

int main(){

    string txt1("Curso de C++");
    string txt2;

    size_t encontrado=txt1.find("C++");

    if(encontrado!=string::npos){
        cout << "Encontrado na posicao: " << encontrado << endl;
    }else{
        cout << "Nao encontrado\n";
    }

    txt2=txt1.substr(9,3);
    cout << txt2 << endl;

    if(txt1.compare(txt2)==0){
        cout << "String iguais\n";
    }else{
        cout << "String diferentes\n";
    }

    return 0;
}
