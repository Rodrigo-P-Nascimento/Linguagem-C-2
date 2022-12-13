#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>

#define MYPORT 9000

int main(){

    int socket_fd, connection_fd;
    struct sockaddr_in serverQ, clientQ;
    socklen_t client_size = (socklen_t)sizeof(clientQ);
    char buffer[100];
    int ativo = 1;

    socket_fd = socket(AF_INET, SOCK_STREAM, 0);//AF_INET = IP, SOCK_STREAM = TCP, 0 é uma flag

    serverQ.sin_family = AF_INET; // tipo de socket que nos estamos usando
    serverQ.sin_port = htons(9000); //qual a porta vamos usar
    inet_aton("127.0.0.1", &(serverQ.sin_addr)); //vamos usar a porta localhost

    if(bind(socket_fd, (struct sockaddr*)&serverQ, sizeof(serverQ)) != 0){
        printf("Erro na hora de abrir essa porta!\n");
        return 0;
    }else{
        printf("A porta 9000 foi aberta com sucesso!\n");
    }

    listen(socket_fd, 10); // esse 10 eh o numero de conexões possiveis no mesmo server
    printf("Estou ouvindo na porta 9000 e esperando conexoes\n");

    while(ativo){

        connection_fd = accept(socket_fd, (struct sockaddr*)&clientQ, &client_size);//aqui o codigo fica travado até receber algo
        printf("Alguem conectou!\n");

        /* Recebendo dados */
        recv(connection_fd, buffer, 10, 0);//100 é o numero de bytes que podemos receber, e 0 é flags
        //recv retorna o numero de bytes recevebidos, quando for 0 ele recebeu nada
        printf("Enviou isso: %s \n", buffer);

        if(strncmp(buffer, "EXIT", 4) == 0){
            ativo = 0;
        }
    }
    printf("\nFechando servidor!\n");
    close(socket_fd);

    return 0;
}