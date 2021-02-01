#include <iostream>

using namespace std;

void Contador(int num, int cont=0);

int main(){

    Contador(10);

	return 0;
}

void Contador(int num, int cont){
    cout << cont << "\n";
    if(num > cont){
        Contador(num, ++cont);
    }

}
