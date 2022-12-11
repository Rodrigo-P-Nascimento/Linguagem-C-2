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

    while(continua){
        printf("Digite uma mensagem para enviar ao servidor: ");
        fgets(msg, TAM_STRING, stdin);
        send(socket_fd, msg, TAM_STRING, 0);

        if(strncmp(msg, "EXIT", 4) == 0){
            continua = 0;
        }
    }
    printf("Saindo do server!");
    close(socket_fd);

    return 0;
}