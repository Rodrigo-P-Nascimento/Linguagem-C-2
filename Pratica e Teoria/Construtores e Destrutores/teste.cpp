#include <iostream>
#include "Cliente.h"

using namespace std;


int main(){

    Cliente c1 = Cliente();
    Cliente c2 = Cliente(12345);
    Cliente c3 = Cliente(12346, "Jose das Cruzes");

    cout << c1.codigo << " - " << c1.nome << endl;
    cout << c2.codigo << " - " << c2.nome << endl;
    cout << c3.codigo << " - " << c3.nome << endl;

    return 0;
}