#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int>num; //nao precisa dimencionar o tamanho do vector, mas pode-se sim, e.g num(5)
    
    int tam, i, numero;

    num.push_back(10);
    num.push_back(1);
    num.push_back(2);
    num.push_back(5);

    for(i=0;i < 5; i++){
        cout << "Digite um numero ae: ";
        cin >> numero;
        num.push_back(numero);
    }

    num.insert(num.begin(), 78);
    num.erase(num.begin());
    tam = num.size();

    cout << "\nPrimeiro valor do vector: "<<num.front() << " e o ultimo: " << num.back() << endl;
    cout << "\nElemento do meio do vector: "<<num.at(tam/2);
    cout << "\nTamanho do vector: "<<tam << endl;

    for(i=0;i < tam ; i++){
        cout << num[i] << "-";
    }

    /*
    O metodo .swap() troca os valores;
    e.g
        num.swap(num2);

    */

	return 0;
}
