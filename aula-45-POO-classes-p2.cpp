#include <iostream>
#include "Aviao.h"

using namespace std;

int main(){

    Aviao *avi1 = new Aviao(1);
    Aviao *avi2 = new Aviao(2);
    Aviao *avi3 = new Aviao(3);

    avi1->imprimir();
    avi1->imprimir();
    avi1->imprimir();

	return 0;
}
