#include <iostream>

using namespace std;

class Data{

public:
    Data();

    int dia;
    int mes;
    int ano;
};

Data::Data(){
    dia=1;
    mes=1;
    ano=1;
}

int main(){

    Data d1;

    cin >> d1.dia;
    cin >> d1.mes;
    cin >> d1.ano;

    cout << d1.dia << "/" << d1.mes << "/" << d1.ano << endl;


    return 0;
}