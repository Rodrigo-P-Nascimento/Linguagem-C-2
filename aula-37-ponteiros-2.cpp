#include <iostream>

using namespace std;

int main(){

    int *pnt;
    int vetor[10];

    pnt = vetor;// apenas o nome do array representa o endereco de memoria do primeiro vetor, ele puca o resto
    //pnt = &vetor[0];  outro exemplo
    /*
    cout << "\n" << pnt << "\n";
    *(pnt++);
    cout << "\n" << pnt << "\n";

    cout << &vetor[1] << "\n";
    cout << &vetor[2] << "\n";
    cout << &vetor[3] << "\n";
    cout << &vetor[4] << "\n";
    */
    *pnt = 10;
    cout << vetor[0] <<"\n";
    *(pnt++);
    *pnt = 20;
    cout << vetor[1] <<"\n";

	return 0;
}
