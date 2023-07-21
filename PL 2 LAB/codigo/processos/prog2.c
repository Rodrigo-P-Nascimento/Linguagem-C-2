#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
	char str[31];


	fgets(str, 30, stdin);

	printf("PROG2-PRE: %s", str);


	sleep(30);

	return 0;

}
