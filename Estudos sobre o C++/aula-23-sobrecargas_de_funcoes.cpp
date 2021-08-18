//posso ter duas ou mais funcoes com o mesmo nome mas com argumentos diferentes.


#include <iostream>

using namespace std;

void Soma();
void Soma(int n1, int n2);

int main(){

    Soma();
    Soma(5, 7);

	return 0;
}
void Soma(){
    int n1 = 5;
    int n2 = 15;
    int re = n1 + n2;
    cout << "A soma dos numeros foi de " << re << "\n";
}
void Soma(int n1, int n2){
    int re = n1 + n2;
    cout << "A soma dos numeros foi de " << re << "\n";
}

