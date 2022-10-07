#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){

    int rep = atoi(argv[1]);
    //argv vai receber uma string, no caso o número, que será convertido para uso

    for(int i=0; i < rep; i++){
        printf("A");
    }

    printf("\n");
    return 0;
}
