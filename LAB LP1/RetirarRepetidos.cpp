#include <iostream>

using namespace std;

int main(){

    int tamVetor, i, j, num;

    cout << "Digita um valor ae: ";
    cin >> tamVetor;

    int vetorA[tamVetor];
    int vetorB[tamVetor];

    for(i=0; i < tamVetor; i++){
        cin >> num;
        vetorA[i] = num;
        vetorB[i] = num;
    }

    for(i=0;i < tamVetor; i++){
        for(j=0; j < tamVetor; j++){
            if(vetorA[i] == vetorB[j]){
                vetorA[i] = 0;
            }
        }
    }

    for(i=0; i < tamVetor; i++){
        cout << vetorA[i] << " ";
        if(i == (tamVetor-1)) cout << endl;
    }
    
  
    return 0;
}