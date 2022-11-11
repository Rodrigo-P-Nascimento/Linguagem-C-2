#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char** argv) { 
	
	printf("Nome do executavel: %s\n", argv[0]);

	if (argc > 1) { 
		printf("PROG: %s\n", argv[1]);
		long x = 0;
		while (x < 9999999999) {
			x++;
		}
	}

	printf("\n");

	return 0;

}
