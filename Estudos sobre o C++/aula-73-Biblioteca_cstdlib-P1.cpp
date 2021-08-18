#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    /*==================================> CONVERSAO DE VALORES <=============================
    double num;
    char numero[80];

    cin >> numero;
    num= numero;//Dessa forma daria erro, pq nao tem como transforma string em double/float
    Entao pode-se usar essas duas funcoes aqui;

    num = atof(numero);
    num = strtod(numero, NULL);

    cout << num << endl;

    ---------------------------------------------------------------------------------------
    atof > Convert string to double (function )
    atoi > Convert string to integer (function )
    atol > Convert string to long integer (function )
    atoll > Convert string to long long integer (function )

    strtod > Convert string to double (function )
    strtof > Convert string to float (function )
    strtol > Convert string to long integer (function )
    strtold > Convert string to long double (function )
    strtoll > Convert string to long long integer (function )
    strtoul > Convert string to unsigned long integer (function )
    strtoull > Convert string to unsigned long long integer (function )
    =======================================================================================*/

    /*==================================> VALORES ALEATORIOS <===============================
    srand(time(NULL));

    for(int i=0;i<10;i++){
        cout << rand()%100 << endl;
    }
    ---------------------------------------------------------------------------------------
    rand > Gerar número aleatório (função)
    srand > Inicializar gerador de número aleatório (função)- ele usa uma 'semente'
    =======================================================================================*/

    /*==================================> Gerenciamento de memória dinamica <================
    int i,n;
    char * buffer;

    printf ("Tamanho da string? ");
    cin >> i;

    buffer = (char*) malloc (i+1);
    if (buffer==NULL) exit (1);

    for (n=0; n<i; n++){
        buffer[n]=rand()%26+'a';
        buffer[i]='\0';
    }
    printf ("Random string: %s\n",buffer);
    free(buffer);

    ---------------------------------------------------------------------------------------
    calloc > Alocar e zero-inicializar array (função)
    free > Desalocar bloco de memória (função)
    malloc > Alocar bloco de memória (função)
    realloc > Realocar bloco de memória (função)
    =======================================================================================*/
    return 0;

}
