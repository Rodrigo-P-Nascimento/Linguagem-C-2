#include <iostream>
#include <string>//objeto string

using namespace std;

int main(){

    string txt("CFB Cursos - Curso de C++");
    txt="CFB Cursos - Curso de C++";

    cout << "Tamanho da string " << txt.size() << endl;
    cout << "Tamanho MAXIMO da string " << txt.max_size() << endl;

    txt.resize(10);

    cout <<"\nTamanho da string " << txt.length() << endl;
    txt.shrink_to_fit();//tamanho minimo de 15 espacos
    cout <<"Capacidade da string " << txt.capacity() << endl;

    txt.clear();

    if(txt.empty()){
        cout << "String vazia\n";
    }else{
        cout << txt << endl;
    }



    return 0;
}
