#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(void) {

	printf("START\n");
	sleep(20);
	fork();
	printf("fork()!\n");
	sleep(20);
	fork();
	printf("FINISH\n");
	sleep(20);

	return 0;

}
