#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

sem_t barreira1;
sem_t barreira2;

void tarefa(long i) {
	printf("[%ld] tarefa()\n", i);
	sleep((int)i);
}

void* tarefa_thread_1(void* p) {
	long idx = (long)p;
	printf("[%ld] iniciou...\n", idx);
	while(1) {
		tarefa(idx);
		printf("[%ld] chegou na barreira...\n", idx);
		sem_post(&barreira1);
		sem_wait(&barreira2);
		printf("[%ld] passou da barreira...\n", idx);
		sleep(1);
	}
}

void* tarefa_thread_2(void* p) {
        long idx = (long)p;
        printf("[%ld] iniciou...\n", idx);
        while(1) {
                tarefa(idx);
                printf("[%ld] chegou na barreira...\n", idx);
                sem_post(&barreira2);
                sem_wait(&barreira1);
                printf("[%ld] passou da barreira...\n", idx);
                sleep(1);
        }
}


int main(void) {

	pthread_t t1, t2;

	sem_init(&barreira1, 0, 0);
	sem_init(&barreira2, 0, 0);

	pthread_create(&t1, 0, tarefa_thread_1, (void*)1);
	pthread_create(&t2, 0, tarefa_thread_2, (void*)2);

	pthread_join(t1, 0);
	pthread_join(t2, 0);

	return 0;
}
