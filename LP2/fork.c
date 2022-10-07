#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void){

    printf("ID do processo pai: %d\n", getpid());
    printf("\n\n");

    int rf = fork();

    if(rf == 0){
        printf("Clone: %d\n", getpid());

        int fk = fork();

        if(fk == 0){
            printf("Clone filho: %d\n", getpid());
        }else{
            printf("Clone pai: %d\n", getpid());
        }
        
    }else{
        printf("Processo pai de PID: %d.\n", getpid());
        printf("Fim do processo pai.\n");
    }
    return 0;
}