#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <pthread.h>
#include <stdatomic.h>

/*
	Aluno: Rodrigo Pereira do Nascimento, matricula: 20200008623
	Esse programa consegue fazer com que as threads não acessem a seção critica ao mesmo tempo, isso graças as instruções atomic_fecth_add.
	Assim que uma thread é criada ela recebe um ticket, e até que sua vez chegue ela fica ali presa no loop do while.
*/

#define QTDTHREADS 10
int global = 0;
int ticket = 1;
int promixoTicket = 1;
int fila[QTDTHREADS];

void* funcao_thread(void* p) {
	long id = (long) p;
	struct tm *datta;
	time_t segundos;
	time(&segundos);
	datta = localtime(&segundos);

	fila[id] = atomic_fetch_add (&ticket, 1); //recebe o ticket de forma atomica
	printf("[thread(%ld)] Iniciou!\n", id);
	while(fila[id] != promixoTicket);//verifica se o seu ticket é o valido
	//seção critica
	printf("[thread(%ld)]: %d/%d/%d || %d:%d:%d\n",id, datta->tm_mday, datta->tm_mon+1, datta->tm_year+1900, datta->tm_hour, datta->tm_min, datta->tm_sec);
	global++;
	atomic_fetch_add (&promixoTicket, 1);//incremento atomico, faz com o ticket avance na fila
	//fim da seção critica
	printf("[thread(%ld)] Saiu!\n", id);
}

int main(void) {
	pthread_t conjuntoThreads[QTDTHREADS];
	void* ret[QTDTHREADS];

	printf("Comecou a contagem!\n");

	for (long i = 0; i < QTDTHREADS; i++)
		pthread_create(&conjuntoThreads[i], NULL,funcao_thread,(void*)i);

	for (long i = 0; i < QTDTHREADS; i++) {
        pthread_join(conjuntoThreads[i], NULL);
	}

	printf("Terminou o programa com global: %d\n", global);

	return 0;
}
