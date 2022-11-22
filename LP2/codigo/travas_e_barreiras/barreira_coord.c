#include <stdio.h>
#include <pthread.h>
#include <stdatomic.h>
#include <unistd.h>

#define QTD_THREADS 5

int arrive[QTD_THREADS];
int proceed[QTD_THREADS];

void tarefa(long i) {
    sleep(i + 1);
}

void* worker(void* p) {
    long idx = (long) p;
    while (1) {
        printf("[%ld] vou realizar tarefa...\n", idx);
        tarefa(idx);
        arrive[idx] = 1; 
        //<await (proceed[idx] == 1);>
        while (proceed[idx] != 1);//Somente quanto todas threads já executaram as suas tarefas esse while é liberado
        proceed[idx] = 0;
        printf("[%ld] realizei tarefa.\n", idx);
    }
}

void* coordinator(void* p) {
    while (1) {
        for (int i = 0; i < QTD_THREADS; i++) {
            //<await (arrive[i] == 1)>
            while (arrive[i] != 1);//Ela vai verifcar se a thread[n] já realizou a sua tarefa, se já então passa pra proxima
            arrive[i] = 0;
        }
        for (int i = 0; i < QTD_THREADS; i++) {//Apos todas threads fazerem os seus trabalhos, esse for libera elas
            proceed[i] = 1;
        }
    }
}

int main(void) {
    pthread_t threads[QTD_THREADS];//Conjunto de Threads que trabalham
    pthread_t coord_thread;//thread unica que coordena as outras

    for (int i = 0; i < QTD_THREADS; i++) {
        arrive[i] = 0;
        proceed[i] = 0;
    }

    for (long i = 0; i < QTD_THREADS; i++) {
        pthread_create(&threads[i], NULL, worker, (void*)i);
    }

    pthread_create(&coord_thread, NULL, coordinator, NULL);

    for(int i = 0; i < QTD_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    pthread_join(coord_thread, NULL);

}
