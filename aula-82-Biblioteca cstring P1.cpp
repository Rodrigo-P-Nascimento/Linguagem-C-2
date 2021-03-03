#include <iostream>
#include <cstring>//string.h-manipulacao de strings
using namespace std;

int main(){
    /*
    char txt1[50]="Mario World eh um bom jogo";
    char txt2[50]="";

    //strcpy(txt2, txt1);
    //strncpy(txt2, txt1, 10);//posso indicar a quantidade de caracteres enviados
    memcpy(txt2, txt1, sizeof(txt1)+1);
    cout << txt2 <<endl;
    */
    /*
    char txt[]="Curso de programacao";
    char txt1[]=" - Pelo PC";

    strcat(txt, " - CFB Cursos");
    //strncat(txt, " - CFB Cursos");
    strcat(txt, txt1);

    cout << txt << endl;
    */

    int res;

    char txt1[]="Curso de java";
    char txt2[]="Curso de javascript";

    res=strcmp(txt1, txt2);
    //res=strncmp(txt1, txt2, 13);
    //res=memcmp(txt1, txt2, sizeof(txt1));

    if(res==0){
        cout << "Iguais\n";
    }else{
        cout << "Diferentes\n";
    }

    return 0;
}
