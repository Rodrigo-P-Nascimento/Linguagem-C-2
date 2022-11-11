#include <stdio.h>
#include <pthread.h>

double global;


void* f(void* p){

    //protovolo de entrada
    //protocolo de saida
    global += 10;
    global *= 2.3;
    //seção critica
    //

}

int main(void){



    return 0;
}