#include <stdio.h>
#include <stdlib.h>

/*
Programa 1, ler um valor inteiro da linha de comando, e exibir este valor enquanto quantidade de linhas como
uma string.

Você passa um valor e o programa irá le-lo, e com esse número salvo, vai repetir uma string qualquer no terminal. 
*/


int main(int argc, char** argv){

    int rep = atoi(argv[1]);
    //argv vai receber uma string, no caso o número, que será convertido para uso

    for(int i=0; i < rep; i++){
        printf("A");
    }

    printf("\n");
    return 0;
}
