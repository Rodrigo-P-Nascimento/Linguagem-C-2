#include <iostream>

using namespace std;

int main(void){

    int num2;

    cout << "Digite um numero inteiro: ";
    cin >> num2;

    if(num2 >= 10){
        cout << num2 << " eh MAIOR ou IGUAL a 10\n";
    }else{
        cout << num2 << " eh MENOR do que 10\n";
    }

    return 0;
}
