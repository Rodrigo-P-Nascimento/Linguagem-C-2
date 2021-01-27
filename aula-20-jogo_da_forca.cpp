#include <iostream>
#include <stdio.h>


using namespace std;

int main(){

    char palavra[] = "oi";
    int i, tentativas = 5;
    int acertos=0, palavraCompleta=0;
    char letra;

    printf("Bem-vindo ao nosso pequeno jogo da forca.\n");
    printf("A palavra ja foi decidida, ela contem %d letras.\n", sizeof(palavra)-1);

    while(1){
        printf("\nNumero de tentativas: %d\n", tentativas);
        printf("\nQual o seu palpite: ");
        cin >> letra;

        for(i=0; i < sizeof(palavra); i++){
            if(letra == palavra[i]){
                acertos++;
                palavraCompleta++;
            }
        }
        if(acertos > 0){
            printf("Sua letra pareceu %d vez(es)!\n", acertos);
        }else{
            printf("Palpite ERRADO!\n");
            tentativas--;
        }
        acertos = 0;
        if(tentativas == 0){
            printf("\nGAME OVER\n");
            break;
        }
        if(palavraCompleta == (sizeof(palavra)-1)){
            printf("\nMuito bem vc achou a palavra!\n");
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
