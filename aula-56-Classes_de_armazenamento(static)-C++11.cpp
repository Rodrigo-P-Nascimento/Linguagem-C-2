#include <iostream>

using namespace std;

void somador(){
    static int i=0;
    i++;
    cout << i <<endl;
    //o static guarda o valor na memoria ate o fianl do programa

}

int main(){

    somador();
    somador();
    somador();
    somador();



    return 0;
}
