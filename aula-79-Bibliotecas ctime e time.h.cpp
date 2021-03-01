#include <iostream>
#include <ctime>
#include <math.h>
using namespace std;

int numeros_primos(int n){
    int i, j;
    int freq=n-1;
    for(i=2;i<=n;++i){
        for(j=sqrt(i);j>1;--j){
            if(i%j==0){
                --freq;
                break;
            }
        }
    }
    return freq;
}

int main(){
    /*==================================> CLOCK e DIFFTIME <======================
    int primos;
    clock_t t1, t2, t3;
    t1=clock();
    primos=numeros_primos(90000);
    t2=clock();
    t3=difftime(t2, t1);
    cout << "Qtde de primos: " << primos << endl;
    cout << "Tempo de CPU: " << ((float)t3)/CLOCKS_PER_SEC << " segundos"<< endl;
    ===========================================================================*/
    /*===========================================================================
    time_t tempo;
    //struct tm*infoTempo;

    time(&tempo);
    //infoTempo=localtime(&tempo);

    //cout << "Tempo agora: " << asctime(infoTempo) << endl;
    //cout << infoTempo->tm_hour << endl;
    cout << ctime(&tempo) << endl;
    ===========================================================================*/
    /*===========================================================================
    time_t tempo;
    struct tm*infoTempo;
    char buffer[80];

    time(&tempo);
    infoTempo=localtime(&tempo);

    strftime(buffer, 80, "Data: %d/%m/%Y", infoTempo);

    cout << buffer << endl;
    ===========================================================================*/
    /*===========================================================================
                                Time manipulation

    clock > Clock program (function )
    difftime > Return difference between two times (function )
    mktime > Convert tm structure to time_t (function )
    time > Get current time (function )

                                Conversion

    asctime > Convert tm structure to string (function )
    ctime > Convert time_t value to string (function )
    gmtime > Convert time_t to tm as UTC time (function )
    localtime > Convert time_t to tm as local time (function )
    strftime> Format time as string (function )

    VEJA SOBRE OS METODOS DA STRUCT TM
    VEJA SOBRE A FORMATACAO EM STRFLINE
    ===========================================================================*/

    return 0;
}
