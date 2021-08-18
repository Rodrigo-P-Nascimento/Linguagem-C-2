#include <iostream>
using namespace std;

int main(void){

    //Operadores &&-and ; ||-or ; not

    int num;

    num = 2;

    cout << "Primeira condicao: ";
    if(num > 4 && num < 7){
        cout << "Verdadeiro\n";
    }else{
        cout <<"Falso\n";
    }

    cout << "Segunda condicao: ";
    if(num < 4 || num > 7){
        cout << "Verdadeiro\n";
    }else{
        cout <<"Falso\n";
    }


    return 0;
}
