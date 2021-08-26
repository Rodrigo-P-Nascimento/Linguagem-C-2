#include <iostream>

using namespace std;

/*
(Difícil) Fazer um programa para:
a) Ler um valor inteiro, positivo e menor ou igual a 20, para a variável N;
b) Ler duas listas X e Y com N valores reais cada um, correspondentes às coordenadas
cartesianas de uma malha de pontos;
c) Construir uma lista Q com os valores:
        1, se o ponto pertence ao 1º quadrante (Xi > 0 e Yi > 0);
        2, se o ponto pertence ao 2º quadrante (Xi < 0 e Yi > 0);
        3, se o ponto pertence ao 3º quadrante (Xi < 0 e Yi < 0);
        4, se o ponto pertence ao 4º quadrante (Xi > 0 e Yi < 0);
        0, se o ponto pertence um dos eixos (Xi = 0 e Yi = 0);
d) Imprimir as coordenadas dos pontos e o quadrante ao qual cada ponto pertence, ponto
abaixo de ponto.
*/

int main(){

    int n, i;

    cin >> n;

    int eixoX[n], eixoY[n], quadrantes[n];
    
    cout << "Digite as coordenadas X e Y dos " << n << " pontos." << endl;

    for(i=0; i < n; i++){
        cin >> eixoX[i] >> eixoY[i];
    }

    for(i=0; i < n; i++){
        if(eixoX[i] > 0 && eixoY[i] > 0){
            quadrantes[i] = 1;
        }else if(eixoX[i] < 0 && eixoY[i] > 0){
            quadrantes[i] = 2;
        }else if(eixoX[i] < 0 && eixoY[i] < 0){
            quadrantes[i] = 3;
        }else if(eixoX[i] > 0 && eixoY[i] < 0){
            quadrantes[i] = 4;
        }else if(eixoX[i] == 0 && eixoY[i] == 0){
            quadrantes[i] = 0;
        }
    }

    cout << "Imprimindo as coordenadas dos quadrantes!" << endl;

    for(i=0; i < n; i++){
        cout << "(" << eixoX[i] << " , " << eixoY[i] << "), pertence ao " << quadrantes[i] << " quadrante." << endl;
    }

    return 0;
}