#include <iostream>
#include <stdio.h>//funcao fgets, noa use gets ok
#include <stdlib.h>//funcao malloc

using namespace std;

int main(){

    /*
    char nome[50];

    fgets(nome, 50, stdin);
    //scanf ("%50[^\n]", nome);
     cout << nome <<"\n";
    */
    char *vnome;
    vnome = (char *) malloc(sizeof(char));

    fgets(vnome, 50, stdin);
    cout << vnome <<"\n";


	return 0;
}
