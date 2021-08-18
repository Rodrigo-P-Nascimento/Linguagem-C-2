#include <iostream>
using namespace std;

void Imp(string txt="Texto padrao!");

int main(){

    Imp("Rosas sao vermelhas violetas sao azuis!");
    Imp();
	return 0;
}

void Imp(string txt){
    cout << txt << "\n";
}
