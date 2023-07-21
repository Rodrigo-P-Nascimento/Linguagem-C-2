#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <pthread.h>

#define QTD_THREADS 5

typedef struct{
    int operacao;
    char codigo;
    float valor;
}operacao_bancaria;

typedef struct{
    char* filename;
    FILE* fp;
    pthread_mutex_t mutex;
}monitor;

monitor m;

void* arqWrite(void *p){
    operacao_bancaria *ob = (operacao_bancaria*)p;
    pthread_mutex_lock(&m.mutex);
    fwrite(ob, sizeof(operacao_bancaria), 1, m.fp);
    printf("Operacao: %d\n", ob->operacao);
    printf("Codigo: %c\n", ob->codigo);
    printf("Valor: %lf\n", ob->valor);
    pthread_mutex_unlock(&m.mutex);

}

//void* arqRead(void *p){}



int main(){

    pthread_t threads[QTD_THREADS];
    operacao_bancaria obs[QTD_THREADS];
    time_t t;

    srand(time(&t));


    m.filename = (char*)malloc(sizeof(char) * 20);
    strcpy(m.filename, "Arquivo.bin");
    m.fp = fopen(m.filename, "w+");
    pthread_mutex_init(&m.mutex, NULL);

    for(int i=0; i < QTD_THREADS; i++){
        obs[i].operacao = rand() % 5;
        obs[i].codigo = 65 + (rand() % 5);
        obs[i].valor = rand() % 1000;
    }

    for(int i = 0; i < QTD_THREADS; i++){
        pthread_create(&threads[i], NULL, arqWrite, (void*) &obs[i]);
    }

    for(int i=0; i < QTD_THREADS; i++){
        pthread_join(threads[i], NULL);
    }

    fclose(m.fp);

    return 0;
}