#include <iostream>
#include <cstring>

using namespace std;

int main(){
    /*
    char * letra;
    char txt[]="the witcher wild hunt";
    char pesquisa='e';

    //letra = (char*) memchr(txt, pesquisa, strlen(txt));
    letra = strchr(txt, pesquisa);

    if(letra!=NULL){
        cout << "Letra " << pesquisa << " encontrada na posicao: " << letra-txt << endl;
    }else{
        cout << "Letra " << pesquisa << " NAO encontrada\n";
    }
    */
    char txt[]="the witcher wild hunt";
    char chave[]="wcu";
    int i;

    i=strcspn(txt, chave);
    cout << "Pos: " << i << " - "<< txt[i] << endl;



    return 0;
}
