#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

/*  LADO DO SERVER
    socket() = ponteiro para um descritor de arquivo
    bind() = associa o socket a uma porta
    listen() = configura o socket como passivo, ele receve dados
    accept() = aceita conexões
    
    
    LADO DO CLIENT
    socket() = ponteiro para um descritor de arquivo
    connect() = faz a conexão a um server
*/

int main(){

    int socket_fd, connection_fd;
    struct sockaddr_in myself, client;
    socklen_t client_size = (socklen_t)sizeof(client);
    char input_buffer[50];

    socket_fd = socket(AF_INET, SOCK_STREAM, 0);//AF_INET = IP, SOCK_STREAM = TCP, 0 é uma flag
    printf("O socket foi criado!\n");

    myself.sin_family = AF_INET; // tipo de socket que nos estamos usando
    myself.sin_port = htons(3001); //qual a porta vamos usar
    inet_aton("127.0.0.1", &(myself.sin_addr)); //vamos usar a porta localhost

    printf("Tentando abrir a porta 3001\n");
    if(bind(socket_fd, (struct sockaddr*)&myself, sizeof(myself)) != 0){
        printf("Erro na hora de abrir essa porta!\n");
        return 0;
    }else{
        printf("A porta 3001 foi aberta com sucesso!\n");
    }

    listen(socket_fd, 10); // esse 10 eh o numero de conexões possiveis no mesmo server
    printf("Estou ouvindo na porta 3001 e esperando conexoes\n");

    while (1){
        printf("Vou travar ate receber alguma coisa\n");
        connection_fd = accept(socket_fd, (struct sockaddr*)&client, &client_size);//aqui o codigo fica travado até receber algo
        printf("Recebi uma menssagem\n");
        recv(connection_fd, input_buffer, 5, 0);//5 é o numero de bytes que podemos receber, e 0 é flags
        //recv retorna o numero de bytes recevebidos, quando for 0 ele recebeu nada
        printf("Recebi isso: %s\n", input_buffer);

        /* Indentificando cliente */
        char ip_client[INET_ADDRSTRLEN];
        inet_ntop(AF_INET, &(client.sin_addr), ip_client, INET_ADDRSTRLEN);
        printf("IP de quem enviou: %s\n", ip_client);

        /* Respondendo */

        sleep(1);
        printf("Enviando mensagem de retorno\n");

        if(send(connection_fd, "PONG", 5, 0) < 0){
            printf("Erro ao enviar mensagem de retorno\n");
        }else{
            printf("Sucesso para enviar mensagem de retorno\n");
        }
    }

    close(socket_fd);

    return 0;
}