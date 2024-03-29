#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>

#define TAM_STRING 100

int main(){

    int socket_fd, continua = 1;
    char msg[TAM_STRING];
    struct sockaddr_in target;

    socket_fd = socket(AF_INET, SOCK_STREAM, 0);
    printf("Socket criado\n");

    target.sin_family = AF_INET;
    target.sin_port = htons(9000);
    inet_aton("127.0.0.1", &(target.sin_addr));

    printf("Tentando conectar\n");

    if(connect(socket_fd, (struct sockaddr*)&target, sizeof(target))  != 0){
        printf("Erro ao conectar no server!\n");
        return 0;
    }else{
        printf("Conectado ao server!\n");
    }
    printf("Digite EXIT para sair!\n\n");
    do{
        printf("Digite uma mensagem para enviar ao servidor: ");
        scanf("%[^\n]%*c", msg);
        send(socket_fd, msg, TAM_STRING, 0);
        printf("Envie isso pra o server: [%s]!\n", msg);

        if(strncmp(msg, "EXIT", 4) == 0){
            continua = 0;
        }
    }while(continua);

    printf("Saindo do server!\n");
    close(socket_fd);

    return 0;
}