#include <iostream>

using namespace std;

int main(){

    int tamVetor, i, j, num;

    cin >> tamVetor;

    int vetorA[tamVetor]; //Crianção do VetorA

    for(i=0; i < tamVetor; i++){
        cin >> num;
        vetorA[i] = num;
    }

    for(i=0;i < tamVetor; i++){ //Se um valor na posição i tiver um clone na posição j, ele muda o valor da posução j para 0
        for(j=i+1; j < tamVetor; j++){
            if(vetorA[i] == vetorA[j]){
                vetorA[j] = 0;
            }
        }
    }

    for(i=0; i < tamVetor; i++){ //Valores com 0 não são mostrados 
        if(vetorA[i] != 0){
            cout << vetorA[i] << " ";
            if(i == (tamVetor-1)) cout << endl;
        }
    }
    
    return 0;
}