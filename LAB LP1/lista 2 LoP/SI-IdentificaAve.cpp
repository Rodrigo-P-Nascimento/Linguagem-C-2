#include <iostream>
#include <cstring>

using namespace std;


int main(){


    char num1, num2, num3, num4, num5; //Essas varaiaveis vão conter apenas um caractere

    string entrada;//Ao final da leitura dos chars eu concateno tudo nessa variavel
    string entradas[10] = {"01011", "00010", "00110", "01000", "01010", "10010", "11000", "11010", "11011", "00000"}; //Criei uma lista para fazer uma verificação mais na frente

    cin >> num1;
    getchar();
    cin >> num2;
    getchar();
    cin >> num3;
    getchar();
    cin >> num4;
    getchar();
    cin >> num5;    

    //Conctenar os caracteres
    entrada += num1;
    entrada += num2;
    entrada += num3;
    entrada += num4;
    entrada += num5;

    if(entrada == entradas[0]){
        cout << "coruja" << endl;
    }else if(entrada == entradas[1]){
        cout << "pardal" << endl;
    }else if(entrada == entradas[2]){
        cout << "galinha" << endl;
    }else if(entrada == entradas[3]){
        cout << "ema" << endl;
    }else if(entrada == entradas[4]){
        cout << "falcão" << endl;
    }else if(entrada == entradas[5]){
        cout << "pato" << endl;
    }else if(entrada == entradas[6]){
        cout << "pinguim" << endl;
    }else if(entrada == entradas[7]){
        cout << "gaivota" << endl;
    }else if(entrada == entradas[8]){
        cout << "garça" << endl;
    }else if(entrada == entradas[9]){
        cout << "avestruz" << endl;
    }

    return 0;
}