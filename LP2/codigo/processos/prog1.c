#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char** argv) { 
	
	int rep = atoi(argv[1]);

	for (int i = 0; i < rep ; i++) {
		printf("A");
	}

	printf("\n");

	return 0;

}
