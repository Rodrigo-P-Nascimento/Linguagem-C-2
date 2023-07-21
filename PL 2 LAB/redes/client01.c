#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main(){

    int socket_fd;
    struct sockaddr_in target;

    socket_fd = socket(AF_INET, SOCK_STREAM, 0);
    printf("Socket criado\n");

    target.sin_family = AF_INET;
    target.sin_port = htons(9000);
    target.sin_addr.s_addr = INADDR_ANY;

    printf("Tentando conectar\n");

    if(connect(socket_fd, (struct sockaddr*)&target, sizeof(target))  != 0){
        printf("Erro ao conectar no server!\n");
        return 0;
    }else{
        printf("Conectado ao server!\n");
    }

    /* Agora, meu socket funciona como um descritor de arquivo usual */
    send(socket_fd, "PING", 5, 0);
    printf("Escrevi mensagem de ping\n");

    /* Recebendo resposta do server conectado */
    char reply[32];
    recv(socket_fd, reply, 32, 0);
    printf("Resposta: %s \n", reply);

    close(socket_fd);

    return 0;
}