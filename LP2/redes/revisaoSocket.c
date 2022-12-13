#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <pthread.h>
#include <strings.h>

#define PORTA 9000
#define QTD_THREADS 5

void* clienteFunc(void* p){
    int client_sock = (int)p;
    char recv_buffer[32];

    bzero(recv_buffer, 32);

    while(1){
        int r_ret = recv(client_sock, recv_buffer, sizeof(recv_buffer), 0);

        printf("Recebi do cliente(%d): %s\n", client_sock, recv_buffer);

        printf("Ecoando mensagem...\n");

        int s_ret = send(client_sock, recv_buffer, sizeof(recv_buffer), 0);
    }
}


int main(){

    int sock_fd, conect_fd;
    int cliente_fd[QTD_THREADS];
    int contador = 0;
    struct sockaddr_in servidor, cliente[QTD_THREADS];
    socklen_t tam_cliente = (socklen_t)sizeof(cliente);
   
    pthread_t threadCliente[QTD_THREADS];

    //iniciar o socket
    sock_fd = socket(AF_INET, SOCK_STREAM, 0);
    puts("Socket criado!");

    servidor.sin_family = AF_INET;
    servidor.sin_port = htons(PORTA);
    servidor.sin_addr.s_addr = INADDR_ANY;

    //Vamos dar um bind no socket

    if(bind(sock_fd, (struct sockaddr*)&servidor, sizeof(servidor)) != 0){
        puts("Erro na hora de abrir essa porta!");
        exit(0);
    }else{
        printf("A porta [%d] esta aberta!\n", PORTA);
    }

    //Configurar o server para listen()

    if(listen(sock_fd, QTD_THREADS) == -1){
        puts("Erro na hora de escutar novas conexoes!");
        exit(0);
    }

    puts("Estou esperando conexoes!");

    while(1){
        cliente_fd[contador] = accept(servidor, (struct sockaddr *)&cliente[contador], &tam_cliente );

        if(cliente[contador] == -1){
            puts("Erro ao tentar conectar!");
            exit(0);
        }else{
            puts("Alguem se conectou!");
        }

        pthread_create(&threadCliente[contador], 0, clienteFunc, (void*)cliente_fd[contador]);
        contador++;
    }

    close(sock_fd);

    return 0;
}