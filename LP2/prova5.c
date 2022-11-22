#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>


#define QTDTHREADS 6

char palavra[QTDTHREADS];

pthread_barrier_t barreira;


void* gera_char(void* p){
    long idx = (long) p;

    int count = 0;
    do{
        char c = rand() % 255;
        palavra[idx] = c;
        count++;
        printf("thread[%ld]: gerou isso!", idx);
        pthread_barrier_wait(&barreira);
    }while(count < 9);
}

void print_palavra(char* str, int size){
    for(int i = 0; i < size; i++){
        printf("%c", palavra[i]);
    }
}

int testa_palidromo(char *str, int size){
    for(int i = 0; i < size; i++){
        for(int j = size-3; j >= 0; j--){
            if(palavra[i] != palavra[j]){
                return 0;//Não palindromo
            }
        }
    }
    return 1;//palindromo
}

int main(){
    time_t t;

    pthread_barrier_init(&barreira, NULL, QTDTHREADS+1);
    srand(time(&t));

    do{
        pthread_barrier_wait(&barreira);
        if(testa_palidromo(palavra, QTDTHREADS)){
            print_palavra(palavra, QTDTHREADS);
            printf(" foi palindromo\n");
        }else{
            printf(" nao foi palindromo\n");
        }
    }while(count < 9);

    return 0;
}