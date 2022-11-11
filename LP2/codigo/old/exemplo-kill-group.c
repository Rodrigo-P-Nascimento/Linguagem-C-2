#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

int main(void) { 

	int pid_original;

	pid_original = getpid();

	fork();
	fork();

	if (pid_original == getpid()) { 
		sleep(10);
		kill(-1, SIGHUP); 
		printf("finalizei grupo\n");		

	} else { 
		//processo clonado
		printf("pid: %d; ppid: %d\n", getpid(),getppid());
		while(1);
		//	printf("floood\n");
	}


	printf("cabou\n");

	return 0;

}
