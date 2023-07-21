#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

int main(void) { 

	int pid_clonado, retorno_kill;

	pid_clonado = fork();

	if (!(pid_clonado == 0)) { 
		//processo original
		printf("pid: %d; ppid: %d\n", getpid(),getppid());
		sleep(5);
		retorno_kill = kill(pid_clonado, SIGHUP); 
		printf("retorno kill: %d", retorno_kill); 		

	} else { 
		//processo clonado
		printf("pid: %d; ppid: %d\n", getpid(),getppid());
		while(1);
		//	printf("floood\n");
	}


	printf("cabou\n");

	return 0;

}
