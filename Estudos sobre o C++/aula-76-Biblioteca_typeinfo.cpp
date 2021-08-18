#include <iostream>
#include <typeinfo>

using namespace std;

class Alek{

};

int main(){

    auto num=6;
    Alek zoio;
    cout << "Tipo de 'num': "<<typeid(num).name() << endl;
    cout << "Tipo de 'zoio': "<<typeid(zoio).name() << endl;

    if(typeid(int).before(typeid(char))){
        cout << "INT vem antes do CHAR\n";
    }else{
        cout << "CHAR vem antes de INT\n";
    }

    return 0;
}
