#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/*
(Difícil) Em uma eleição sindical concorreram aos cargos de presidente três candidatos (representados pelas variáveis A, B e C). Durante a apuração dos votos foram computados votos nulos e em branco, além dos votos válidos para cada candidato. Deve ser criado um programa para fazer a leitura da quantidade de votos válidos para cada candidato, além de ler também a quantidade de votos nulos e em branco. Ao final, o programa deve apresentar o número total de eleitores, considerando votos válidos, nulos e em branco; o percentual correspondente aos votos válidos em relação à quantidade de eleitores; o percentual correspondente de votos válidos do candidato A em relação à quantidade de eleitores; o percentual correspondente de votos válidos do candidato B em relação à quantidade de eleitores; o percentual correspondente de votos válidos do candidato C em relação à quantidade de eleitores; o percentual correspondente de votos nulos em relação à quantidade de eleitores; e por último o percentual correspondente de votos em branco em relação à quantidade de eleitores.
*/

int main(){

    int candA=0, candB=0, candC=0;
    int nulos=0, brancos=0, contTotal=0;
    int voto=0;

    while(voto!=-1){
        cout << "Vote - |1000| - Candidadto A\nVote - |2000| - Candidadto B\nVote - |3000| - Candidadto C" << endl;
        cout << "Vote  - |0| - para branco, ou -1 para sair" << endl;

        cin >> voto;

        switch (voto){
        case -1:
            break;
        case 0:
            cout << "Voto em branco computado!" << endl;
            brancos++;
            contTotal++;
            break;
        case 1000:
            cout << "Voto para o candidato A computado!" << endl;
            candA++;
            contTotal++;
            break;
        case 2000:
            cout << "Voto para o candidato B computado!" << endl;
            candB++;
            contTotal++;
            break;
        case 3000:
            cout << "Voto para o candidato C computado!" << endl;
            candC++;
            contTotal++;
            break;
        default:
            cout << "Voto nulo computado!" << endl;
            nulos++;
            contTotal++;
            break;
        }
    }

    float votosValidos = ((candA + candB + candC) * contTotal) / 100; 

    cout << fixed << setprecision(2);
    cout << "Numero total de eleitores: " << contTotal << endl;
    cout << "Votos validos: " << votosValidos << "%" << endl;
    cout << "Votos do candidato A: " << candA << " [" << (candA*contTotal)/100 << "%]" << endl;
    cout << "Votos do candidato B: " << candB << " [" << (candB*contTotal)/100 << "%]" << endl;
    cout << "Votos do candidato C: " << candC << " [" << (candC*contTotal)/100 << "%]" << endl;
    cout << "Votos em branco: " << brancos << " [" << (brancos*contTotal)/100 << "%]" << endl;
    cout << "Votos nulos: " << nulos << " [" << (nulos*contTotal)/100 << "%]" << endl;

    return 0;
}