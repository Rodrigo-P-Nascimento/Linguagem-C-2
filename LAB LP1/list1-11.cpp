#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/*
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