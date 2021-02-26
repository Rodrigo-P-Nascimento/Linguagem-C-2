#include <iostream>
#include <cstdlib>

using namespace std;

void fim(){
    cout << "Programa terminou sem problemas\n";
}

int comparacao(const void* a, const void* b){
    return (*(int*)a - *(int*)b);
    //0 -> a = b
    //>0 -> a > b
    //<0 -> a < b
}

int main(){

    /*===========================> AMBIENTE <================================
    atexit(fim);

    for(int i=0;i<10;i++){
        if(i<5){
            cout << i << endl;
        }else{
            exit(EXIT_SUCCESS);
            cout << i << endl;
        }
    }

    const char* p;

    p=getenv("PATH");
    cout << p << endl;

    ---------------------------------------------------------------------------
    abort > Abortar o processo atual (função)
    atexit > Definir função a ser executada na saída (função)
    at_quick_exit > Definir função a ser executada na saída rápida (função)
    exit > Terminar processo de chamada (função)
    getenv > Obter string de ambiente (função)
    quick_exit  > Encerrar processo de chamada rapidamente (função)
    system > Execute o comando do sistema (função)
    _Exit > Terminar processo de chamada (função)
    =========================================================================*/


    /*===========================> PESQUISANDO E CLASSIFICANDO <==============

    int vetor[]={2,4,56,7,8,23,5,7,89,0};
    int pesq=23;
    int *pos;
    size_t tam=(sizeof(vetor)/4);

    qsort(vetor, tam, sizeof(int), comparacao);

    for(int i=0;i<tam;i++){
        cout << vetor[i] << endl;
    }
    pos=(int*)bsearch(&pesq, vetor, tam, sizeof(int), comparacao);
    if(pos!=NULL){
        cout << "O elemento " << pesq << " esta no array\n";
    }else{
        cout << "O elemento " << pesq << " NAO esta no array\n";
    }
    --------------------------------------------------------------------------
    bsearch > Pesquisa binária em array (função)
    qsort > Ordena os elementos da matriz (função)
    =========================================================================*/
    return 0;
}
