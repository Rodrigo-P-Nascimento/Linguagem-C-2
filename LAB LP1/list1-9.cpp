#include <iostream>
#include <iomanip>

using namespace std;
/*
(Fácil) Elaborar um programa que apresente o valor da conversão em real (R$) de um valor lido em dólar (US$). O programa deve solicitar o valor da cotação do dólar e também a quantidade de dólares disponíveis com o usuário.
*/

int main(){

    float dolares, reais, contacao;

    cout << fixed << setprecision(2);
    
    cout << "Digite a contacao do dolar e o valor em dolares que voce possui." << endl;
    cout << "Cotacao atual: R$ ";
    cin >> contacao;
    cout << "Digite o montante em dolares que voce possui: US$ ";
    cin >> dolares;

    reais = dolares * contacao;

    cout << "Convertendo US$ " << dolares << " , temos R$ " << reais << endl;

    return 0;
}




