#include <iostream>
#include "classes.h"

using namespace std;

int main(){

    Veiculo *vec1 = new Veiculo(1);

    cout <<"Velocidade original: "<< vec1->getVelMax()<<endl;
    vec1->setVelMax(7000);
    cout << "Velocidade alterada: "<<vec1->getVelMax()<<endl;

	return 0;
}
