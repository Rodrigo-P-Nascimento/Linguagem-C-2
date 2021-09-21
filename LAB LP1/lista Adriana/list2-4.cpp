#include <iostream>
#include <iomanip>

using namespace std;

typedef struct{
    char sexo;
    int vezesVertibular;
}tAlunos;

/*
(Difícil) Foi feita uma pesquisa para determinar o perfil dos alunos que ingressaram na
engenharia na UFCG num determinado semestre. Fazer um programa que:

> leia inicialmente o número total de alunos que prestaram vestibular para engenharia no
semestre
>  leia, em seguida, um número indeterminado de linhas com informações sobre os alunos que
passaram no vestibular. Cada linha contém o sexo do aluno ('m' para masculino e 'f' para
feminino) e o número de vezes que este aluno prestou vestibular. A última linha, que não
entrará nos cálculos, contém no lugar do sexo a letra 'x'. Este é o "sinal" para parar de ler
dados.
> determine e imprima;
    - a porcentagem de alunos que passaram no vestibular;
    - a porcentagem de alunos do sexo masculino que passaram no vestibular;
    - a porcentagem de alunos, independente de sexo, que prestou vestibular 3 ou mais vezes no período.
*/

int main(){

    int alunosTotal, i, vestibular;
    char sex;
    int contApro=0, contMas=0, vest3=0;
    float ponctAprovados, ponctHomens, prestararam;


    cin >> alunosTotal;

    tAlunos alunos[alunosTotal];

    for(i=0; i < alunosTotal; i++){ // Preencher o array com valores nulos
        alunos[i].sexo = '0';
        alunos[i].vezesVertibular = '0';
    }

    i=0;

    while (1){
        cin >> sex;

        if(sex == 'x') break;

        cin >> vestibular;

        alunos[i].sexo = sex;
        alunos[i].vezesVertibular = vestibular;

        if(sex == 'm') contMas++;
        if(vestibular >= 3) vest3++;
        i++;//Vamos utilizar esse i como contador do total de alunos aprovados
    }
    
    ponctAprovados = (i*100) / (alunosTotal*1.00);
    ponctHomens = (contMas*100) / (ponctAprovados*1.00);
    prestararam = (vest3*100) / (ponctAprovados*1.00);

    cout << fixed << setprecision(2);
    cout << ponctAprovados << "%% dos alunos foram aprovados no vestibular!" << endl;
    cout << ponctHomens << "%% dos alunos que passaram eram homens!" << endl;
    cout << prestararam << "%% dos alunos prestaram 3 ou mais vestibulares." << endl;

    return 0;
}