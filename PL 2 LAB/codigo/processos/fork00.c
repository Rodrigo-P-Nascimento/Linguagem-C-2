#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(void) {

	printf("ANTES do fork(), pid original: %d\n", getpid());

	sleep(10);

	int rf = fork();

	printf("DEPOIS: fork=%d pid=%d\n",
			rf, getpid()); //exibido 2x

	if (rf == 0) {
		printf("sou o processo clonado (%d)\n",
				getpid());
		
	} else {
		printf("sou o processo original! (%d)\n",
				getpid());
	}


	sleep(30);

	return 0;

}
