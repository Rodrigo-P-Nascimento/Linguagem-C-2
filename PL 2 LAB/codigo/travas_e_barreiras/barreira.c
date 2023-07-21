#include <stdio.h>
#include <pthread.h>
#include <stdatomic.h>
#include <unistd.h>

#define QTD_TH 5

int count = 0;

void tarefa(long i) {
    sleep(i + 1);
}

void* barreira(void*p){
    long idx = (long) p;
    while(1) {
        printf("[%ld] vou realizar tarefa...\n", idx);
        tarefa(idx);
        atomic_fetch_add(&count,1);
        while ((count % QTD_TH) != 0);//Enquanto todas as thread não fizerem as suas tarefas, todas as que já terminatam ficam presas aqui
        printf("[%ld] realizou tarefa (%d).\n", idx, count);
    }
}

int main(int argc, char const *argv[])
{
    pthread_t threads[QTD_TH];
    for (long i = 0; i < QTD_TH; i++)
    {
        pthread_create(&threads[i], NULL, barreira, (void*) i);
    }
    for (long i = 0; i < QTD_TH; i++)
    {
        pthread_join(threads[i], NULL);
    }
    return 0;
}
