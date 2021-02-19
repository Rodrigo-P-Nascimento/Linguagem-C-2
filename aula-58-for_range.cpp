#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<string>lista{"Paulo", "Vanessa", "Monica", "Joao"};
    int x[5]{21,22,23,24,25};

    const char* nome="Henri";

    for(string i:lista){//versao 1
        cout << i <<" ";
    }
    cout << "\n";
    for(auto i:x){//versao 2
        cout << i <<endl;
    }
    cout << "\n";

    /*
    for(auto i:nome){//vai dar erro, pq a string nao eh uma colecao-pq nao tem u .begin ou .end
        cout << i <<endl;
    }
    //o melhor seria usar o bom e velho for normal
    */

	return 0;
}
