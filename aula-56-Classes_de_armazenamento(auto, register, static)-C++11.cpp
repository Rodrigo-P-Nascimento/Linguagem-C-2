#include <iostream>
#include <vector>

using namespace std;

auto soma(double n1, double n2)->int {
    return n1+n2;
}

int main(){

    vector<int>v{12,34,5,67,90};
    register int cont;//para variaveis que sao usadas repetidas vezes com os contadores

    auto num=10;
    auto nome="Fabio";
    auto dec=23.6;

    auto res = soma(13.7, 45.2);

    for(auto it=v.begin();it!=v.end();it++){
        cout << *it << endl;
    }
    cout << "\n";
    cout << res << endl;



    return 0;
}
