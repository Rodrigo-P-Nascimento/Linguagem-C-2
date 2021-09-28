#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main(){

    ifstream fp;

    fp.open("ufpb_brasao.png", ios::binary);

    if(!fp.is_open()){
        cout << "Erro ao abrir o arquivo!" << endl;
        return 0;
    }

    char c;
    while(!fp.eof()){
        fp.read(&c, 1);
        cout << "\033[40;32m" << c;
        Sleep(10);

        cout.flush();
    }
    

    return 0;
}