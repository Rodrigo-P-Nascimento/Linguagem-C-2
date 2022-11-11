/*
 * Faça um programa em C que solicite do usuário um valor inteiro e crie 
 * (clone) este valor recebido em quantidade de processos. Os processos 
 * executarão uma função para que durmam 60s. O processo original (em 
 * sua função principal) posteriormente deve dormir por 20s e depois 
 * finalizar todos os processos clonados antes que estes acordem.
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/signal.h>

void funcao_clone(void) {
	printf("[clone] em execucao!\n");
	sleep(60);
}

int main(void) {

	int qtd_clones;
	int pid_original;
	int* pid_clones;
	int ret_fork;

	pid_original = getpid();	
	printf("[original] Digite a quantidade de processos a criar: ");
	scanf("%d", &qtd_clones);

	pid_clones = (int*)malloc(sizeof(int)*qtd_clones);

	for (int i = 0; i < qtd_clones; i++) {
		if (getpid() == pid_original) {
			//processo original
			ret_fork = fork();
			if (getpid() == pid_original) { 
				//ainda processo original
				pid_clones[i] = ret_fork;
			} else {
				//processo clonado
				funcao_clone();
			}
		} else {
			//processo clone
			funcao_clone();
		}
	}

	if (getpid() == pid_original) {
		//processo original
		printf("[original] dormir por 10 segundos...\n");
		sleep(10);
		printf("[original] finalizando clonados...\n");
		for (int i = 0; i < qtd_clones; i++) {
			kill(pid_clones[i], SIGHUP);
		}
	}

	return 0;
}
