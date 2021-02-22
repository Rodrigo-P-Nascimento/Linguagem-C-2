#include <iostream>
#include <vector>

using namespace std;

int main(){

    //[captura de variaveis](passagem de parametros){corpo da funcao};
    /*
    auto maior=[](int n1, int n2)->int{
        return (n1>n2) ? n1:n2;
	};
	cout << maior(5,6) << endl;
    */

    int x1,x2,x3,x4;
    x1=2; x2=3;x3=7;x4=8;

    auto soma=[x1,x2,x3,x4]()->int{//para capturar todas as variaveis do scopo basta fazer [=]
        return x1+x2+x3+x4;
    };

    auto maior=[](vector<int>n)->int{
        auto m=0;
        for(int i:n){
            m=(m>i) ? m:i;
        }
        return m;
	};

	cout << maior({1,2,3,4,-9,78,0}) << endl;
	cout << soma()<<endl;
}
