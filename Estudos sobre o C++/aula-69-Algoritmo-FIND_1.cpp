#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    vector<int> numeros;
    vector<int>::iterator it;
    int num,qtde=10, cont=1;

    while(qtde>0){
        cout << "Digite o "<< cont << " numeral: ";
        cin >> num;
        it=find(numeros.begin(), numeros.end(), num);
        if(it!=numeros.end()){
            cout << "Numeral ja existe no vector\n";
        }else{
            numeros.push_back(num);
            qtde--;
            cont++;
        }
    }



    return 0;
}
