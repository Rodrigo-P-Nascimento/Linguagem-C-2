/*
(Questão 2 - 5 pontos) Faça um programa em C/C++ que controle o acesso de 
threads a duas seções críticas diferentes. O programa deve ter 10 tópicos,
e duas variáveis ​​globais (xey) de tipo int, iniciadas com zero. como tópicos
modificarão em loop e em sequência as duas variáveis, porém a ordem de 
modificado dependerá do valor do índice que seguirá no momento de sua 
criação: caso o índice seja par, a thread incrementa o valor da variável x com 
um valor aleatório entre 5 e 100 e dorme 200ms, em seguida incrementa o valor 
da variável y com um valor aleatório entre 1 e 50 e dorme 100ms; caso o índice 
seja igual, a thread incrementa o valor da variável x com um valor aleatório 
entre 1 e 30 e dorme 100ms, em seguida incrementa o valor da variável y com 
um valor aleatório entre 15 e 95 e dura 250ms.
 
Use semáforos (biblioteca semaphore.h) para controlar o acesso às seções 
críticas, (trate o acesso a cada uma das variáveis ​​como uma seção crítica
diferente) e garanta que todas as threads incrementem as variáveis ​​globais
dentro de um ciclo de iterações. O programa deverá ser finalizado quando a 
soma dos valores de xey for maior que 2000. Comente o código explicando 
o que é uma seção crítica, e como foi feito o controle de acesso às duas 
seções críticas do problema usando semáforos.*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>
#include <semaphore.h>

#define QTD_THREADS 10

sem_t mutex;

int x = 0;
int y = 0;
int ativo = 1;
int soma = 0;

void* secao_critica(void* p) {
	long idx = (long)p;
	
	while(ativo) {
		sem_wait(&mutex);//Vai bloquear as outras threads aqui
        //seção critica
        int randomNumber = 0;
        if(idx % 2 == 0){
            randomNumber = (rand() % (100 - (5) + 1)) - 5;
            x = x + randomNumber;
            sleep(0.1);
            randomNumber = (rand() % (50 - (1) + 1)) - 1;
            y = y + randomNumber;
            sleep(0.2);
        }else{
            randomNumber = (rand() % (30 - (1) + 1)) - 1;
            x = x + randomNumber;
            sleep(0.1);
            randomNumber = (rand() % (95 - (15) + 1)) - 15;
            y = y + randomNumber;
            sleep(0.25);
        }
        soma = x + y;
        if(soma > 2000) ativo = 0;
        //fim da seção critica
		sem_post(&mutex);//Desbloqueia as threads
		
	}
}

/* Seção critica é uma parte do codigo acessa dados que são compartilhados com N processos/threads 
porem esse acesso não pode ser feito de uma forma concorrente entre os N rocessos/threads, somente um deles pode alterar esse valores por vez, para garantir que os valores estejam corretos. 
*/
int main(void) {
	pthread_t threads[QTD_THREADS];
    time_t t;

    srand(time(&t));

	sem_init(&mutex, 0, 1);//Inicia o semafóro, 0 para indicar que ele será compartilhado com as threads, e 1 como valor de inicio

	for (long i = 0; i < QTD_THREADS; i++) {
		pthread_create(&threads[i], 0, secao_critica, (void*)i);
	}

	for (int i = 0; i < QTD_THREADS; i++) {
		pthread_join(threads[i], NULL);
	}

	return 0;
}
