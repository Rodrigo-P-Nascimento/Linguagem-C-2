#include <iostream>
#include "Cliente.h"

using namespace std;


int main(){

    Cliente c1 = Cliente();
    Cliente c2 = Cliente(12345);
    Cliente c3 = Cliente(12346, "Jose das Cruzes");

    Cliente *p1;
    p1 = new Cliente(12344, "Maria das Dores");
    delete p1; // Libera espaço na memoria 
    p1 = new Cliente(12344, "Jose Mateus");

    c1.setSexo("Mulher");
    c2.setSexo("Homem");
    c3.setSexo("Trans");

    cout << c1.codigo << " - " << c1.nome << " > " << c1.getSexo() <<  endl;
    cout << c2.codigo << " - " << c2.nome << " > " << c2.getSexo() <<  endl;
    cout << c3.codigo << " - " << c3.nome << " > " << c3.getSexo() <<  endl;

    return 0;
}