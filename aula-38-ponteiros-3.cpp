#include <iostream>

using namespace std;

void soma(float *num1, float num2);
void ptArray(float *vetor);

int main(){

    float num=0;
    float vetor[5];

    soma(&num, 12);
    ptArray(vetor);

    //cout << num << "\n";

    for(int i=0; i < 5; i++){
        cout << vetor[i] << "\n";
    }

	return 0;
}

void soma(float *num1, float num2){
    *num1+=num2;
}
void ptArray(float *vetor){

    vetor[0] = 1;
    vetor[1] = 2;
    vetor[2] = 3;
    vetor[3] = 4;
    vetor[4] = 5;
}
