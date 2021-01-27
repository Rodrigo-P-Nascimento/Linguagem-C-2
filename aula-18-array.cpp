#include <iostream>

using namespace std;

int main(){

    int vetor[5];
    int cont1, cont2;

    for(cont1=0,cont2=0; cont1 < 5;cont1++, cont2+=2){
        vetor[cont1] = cont2;
    }
    for(cont1=0; cont1 < 5; cont1++){
        cout << vetor[cont1]<< "\n";
    }

    return 0;
}
