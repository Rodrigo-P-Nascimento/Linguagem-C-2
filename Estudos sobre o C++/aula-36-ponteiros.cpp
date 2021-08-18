#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int num=8;
    int *pt = &num;

    printf("Endereco da variavel Num: \t%p\n", &num);
    printf("Endereco salvo no ponteiro: \t%p\n", pt);
    printf("Valores de Num e do ponteiro: %d - %d\n", num, *pt);

    //podemos fazer o ponrteiro apontar para outra variavel
    //pt = &outraVariavel;
	return 0;
}
