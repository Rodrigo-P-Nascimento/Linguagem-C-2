 /*
(Questão 1 - 5 pontos) Faça um programa em C/C++ que crie um arquivo de texto 
que funcionará como um dicionário contendo todas as strings com 4 caracteres 
alfabéticos maiúsculos (de "AAAA" a "ZZZZ"). Cada letra do alfabeto (de A a
Z) deve ter sua parte do dicionário gerada por uma thread individual, de tal 
forma que esta thread gere todas as strings iniciadas por aquela letra (ex. a 
thread que gerará as strings começando com a letra 'C' gerará as strings de 
"CAAAA" a "CZZZZ"). Depois que todas as threads geraram suas partes, a thread 
principal deve gerar um arquivo de texto contendo o dicionário inteiro. 
 
Use barreiras (API Posix Threads - pthread.h ou uma API de threads STD C++11) 
para sincronizar como fios.
 
Referências para manipulação de arquivos em C:
 
https://www.inf.pucrs.br/~pinho/LaproI/Arquivos/Arquivos.htm (português)
http://www.csc.villanova.edu/~mdamian/C/c-files.htm (inglês)

*/

#include <stdio.h>
#include <pthread.h>
#include <stdatomic.h>
#include <time.h>
#include <unistd.h>

#define QTD_THREADS 4

int terminou[QTD_THREADS];
int processou[QTD_THREADS];
char palavras[4];
int result = 0;
int limite = 26;
FILE *arq;

void* worker(void* p) {
    long idx = (long) p;
    int x = 0;
    time_t t ;
    char letras[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','Y','Z'};
    while (limite) {
        
        palavras[idx] = letras[x];
        x = x + 1;
        terminou[idx] = 1; 

        while (processou[idx] != 1);//Somente quanto todas threads já executaram as suas tarefas esse while é liberado
        processou[idx] = 0;
        
    }
}

void* coordinator(void* p) {
    while (limite) {
        for (int i = 0; i < QTD_THREADS; i++) {
            while (terminou[i] != 1);
            terminou[i] = 0;
        }
        result = fputs(palavras, arq);
        printf("%s\n", palavras);
        limite--;
        if (result == EOF)
            printf("Erro na Gravacao\n");

        for (int i = 0; i < QTD_THREADS; i++) {//Apos todas threads fazerem os seus trabalhos, esse for libera elas
            processou[i] = 1;
        }
    }
}

int main(void) {
    pthread_t threads[QTD_THREADS];//Conjunto de Threads que trabalham
    pthread_t coord_thread;//thread unica que coordena as outras
    time_t t;
    srand(time(&t));

    arq = fopen("alfabeto.txt", "wt");  // Cria um arquivo texto para gravação

    if (arq == NULL){
        printf("Problemas na CRIACAO do arquivo\n");
        return 0;
    }

    for (int i = 0; i < QTD_THREADS; i++) {
        terminou[i] = 0;
        processou[i] = 0;
    }

    for (long i = 0; i < QTD_THREADS; i++) {
        pthread_create(&threads[i], NULL, worker, (void*)i);
    }

    pthread_create(&coord_thread, NULL, coordinator, NULL);

    for(int i = 0; i < QTD_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    pthread_join(coord_thread, NULL);

    fclose(arq);

    return 0;
}
