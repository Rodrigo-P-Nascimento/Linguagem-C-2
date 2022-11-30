/*
(Questão 3 - 5 pontos) Faça um programa em C/C++ que simule o controle de
temperatura de um motor. O programa deve ter uma variável global do tipo
float chamada temperatura (que armazenará a temperatura em Celsius do motor,
com valor inicial 600 C) e duas threads além da main, seguindo funções 
diferentes. A primeira linha realizará um incremento na temperatura
com um valor aleatório entre -10 e 90 e depois dormirá 200ms. a segunda 
o fio deve conter um mecanismo que detecte o quanto antes quando o valor da 
temperatura supera 1000C - quando isso acontecer deve-se dormir 300ms eo
valor da variável temperatura passa a ser 600 novamente.
 
O programa deverá ser finalizado após 3 reduções de temperatura do motor.
Comente o código explicando o mecanismo utilizado na segunda thread e qual 
seria a alternativa se não existisse o requisito de detecção da temperatura de
forma mais imediata possível.*/

#include <stdio.h>
#include <stdatomic.h>
#include <unistd.h>
#include <time.h>
#include <pthread.h>

float temperatura = 600;
int ativo = 1;
int randomNum = 0;
int cont = 0;
int lock = 0;

void *threadNumberOne(void *p){

    //seção critica - entrada
    while(ativo){
        while (lock);
        randomNum = (rand() % (90 - (-10) + 1)) - 10;
        printf("Valor: %d\n", randomNum);
        temperatura = temperatura + (float)randomNum;
        printf("temperatura: %0.f\n", temperatura);
        sleep(0.2);
    }
    //seção critica - saida
}

void *threadNumberTwo(void *p){
    while(cont < 3){
        while(temperatura < 800);//ficamos verificando esse valor contantimente ate ele ser verdadeiro
        lock = 1;
        temperatura = 600;
        printf("Atingiu 1000C !\n");
        cont++;
        sleep(0.3);
        lock = 0;
    }
    ativo = 0;
    
}
/* O while "while(temperatura < 800)" fica verificando esse valor continuadamente, gastando processamento mas é algo que é bastante rapido, quando a temperatura muda para acima de 1000 graus, a variavel lock fica positiva travando a thread, e depois de executar as devidas instruções da segunda thread, a lock é liberada, e tudo começa de novo.*/

int main ()
{
    pthread_t threadOne, threadTwo;
    time_t t;

    srand(time(&t));

    pthread_create(&threadOne, NULL, threadNumberOne, NULL);
    pthread_create(&threadTwo, NULL, threadNumberTwo, NULL);

    pthread_join(threadOne, NULL);
    pthread_join(threadTwo, NULL);

    return 0;
}
