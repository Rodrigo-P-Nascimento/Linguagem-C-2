#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main(){

    char palavra[] = "bola";
    int tamArray = sizeof(palavra)-1;
    char auxilioPalavra[tamArray];
    int i, tentativas = 5;
    int acertos=0, palavraCompleta=0;
    char letra;

    for(i=0;i < tamArray; i++){
            auxilioPalavra[i] = '-';
        }

    while(1){
        printf("Bem-vindo ao nosso pequeno jogo da forca.\n");
        printf("A palavra ja foi decidida, ela contem %d letras.\n", int(sizeof(palavra)-1));

        for(i=0;i < sizeof(auxilioPalavra); i++){
            cout << auxilioPalavra[i];
        }

        printf("\nNumero de tentativas: %d\n", tentativas);
        printf("\nQual o seu palpite: ");
        cin >> letra;

        for(i=0; i < tamArray; i++){
            if(letra == palavra[i] && letra != auxilioPalavra[i]){
                acertos++;
                palavraCompleta++;
                auxilioPalavra[i] = letra;
            }
        }
        if(acertos > 0){
            printf("Sua letra pareceu %d vez(es)!\n", acertos);
        }else{
            printf("Palpite ERRADO!\n");
            tentativas--;
        }
        sleep(2);
        system("clear");
        acertos = 0;
        if(tentativas == 0){
            printf("GAME OVER\n");
            break;
        }
        if(palavraCompleta == (sizeof(palavra)-1)){
            printf("Muito bem vc achou a palavra!\n");
            break;
        }

    }
    printf("A palavra era: ");
    for(i=0;i < sizeof(palavra); i++){
        cout << palavra[i];
    }
    printf("\nObrigado por jogar o nosso jogo.\n");

	return 0;
}
