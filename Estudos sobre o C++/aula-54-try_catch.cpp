#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;


double divide(double n1, double n2){
    if(n2 == 0){
        throw "Erro por divisao por ZERO\n";
    }
    return n1/n2;
}

int main(){

    vector <int> num(5);

    double n1,n2;
    cout << "Digita dois numeros ae: ";
    cin >> n1 >> n2;

    try{

        //num.at(0) = 10;
        //cout << num[0] << endl;
        cout << divide(n1, n2);
    }catch(const char* e){
        cout << "ERRO: " <<e;
    }


    /*
    catch(exception& e){
        cout << "ERRO: "<<e.what()<< endl;
    }
    */
	return 0;
}
