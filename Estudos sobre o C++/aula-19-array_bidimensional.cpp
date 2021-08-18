#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int linha=2;
    int coluna=2;
    int vetor[linha][coluna];
    int i,j, num=1;

    for(i=0;i < linha;i++){
        for(j=0; j < coluna;j++, num++){
            printf("Digite o %dº valor: ", num);
            cin >> vetor[i][j];
        }
    }

    printf("\nMatriz %dx%d: \n", linha, coluna);
    for(i=0; i < linha;i++){
        for(j=0; j < coluna; j++){
            cout << vetor[i][j]<< " ";
        }
        cout <<"\n";
    }

    return 0;
}
