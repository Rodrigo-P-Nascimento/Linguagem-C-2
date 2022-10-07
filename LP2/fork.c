#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void){

    printf("ID do processo pai: %d\n", getpid());
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    int rf = fork();

    if(rf == 0){
        printf("SOU O PROCESSO CLONADO: %d.\n", getpid());
        printf("FORK\n");
        fork();
    }else{
        printf("SOU O PROCESSO ORIGINAL: %d.\n", getpid());
        printf("Pai falando aqui bro!\n");
    }

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\nFIM do processo\n");

    return 0;
}