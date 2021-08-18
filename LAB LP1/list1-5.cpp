#include <iostream>
#include <iomanip>

using namespace std;

/*
[5](Médio) Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um automóvel que faz 12 kilômetros por litro. Para o cálculo, o usuário deve fornecer o tempo gasto e a velocidade média durante a viagem. Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA ← VELOCIDADE × TEMPO. A partir do valor da distância, basta calcular a quantidade em litros de combustível utilizada na viagem com a fórmula LITROS_USADOS ← DISTANCIA / 12. O programa deve apresentar os valores da velocidade média, tempo gasto na viagem, a distância percorrida e a quantidade de litros utilizadas na viagem.
*/

int main(){


    float velMedia, tempo, distancia;
     
    cout << fixed << setprecision(2);
    cout << "Informe a velocidade media |km/h|:  ";
    cin >> velMedia;
    cout << "Tempo gasto nessa vaigem |horas|: ";
    cin >> tempo;

    distancia = velMedia * tempo;

    cout << "\t|Dados extraidos| " << endl;
    cout << "\tVelocidade Media: " << velMedia << " km/h."<<  endl;
    cout << "\tTempo gasto: " << tempo << " horas." << endl;
    cout << "\tDistancia percorrida: " << distancia << "km." << endl;
    cout << "\tLitros usados: " << distancia/12 << " litros." << endl;

    return 0;
}