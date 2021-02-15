#include <iostream>
#include "Heranca.h"

using namespace std;

int main(){

    Moto *v1= new Moto();
    Carro *v2= new Carro();
    Tanque *v3= new Tanque();

    v1->imprimir();
    v2->imprimir();
    v3->imprimir();

	return 0;
}
