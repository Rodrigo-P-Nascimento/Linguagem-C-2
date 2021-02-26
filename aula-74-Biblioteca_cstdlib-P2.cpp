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
    abort > Abortar o processo atual (fun��o)
    atexit > Definir fun��o a ser executada na sa�da (fun��o)
    at_quick_exit > Definir fun��o a ser executada na sa�da r�pida (fun��o)
    exit > Terminar processo de chamada (fun��o)
    getenv > Obter string de ambiente (fun��o)
    quick_exit  > Encerrar processo de chamada rapidamente (fun��o)
    system > Execute o comando do sistema (fun��o)
    _Exit > Terminar processo de chamada (fun��o)
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
    bsearch > Pesquisa bin�ria em array (fun��o)
    qsort > Ordena os elementos da matriz (fun��o)
    =========================================================================*/
    return 0;
}
