#include <iostream>
#include <vector>

using namespace std;

int main(){
    //as funções são as mesmas da classe string, então olha lá no site cplusplus
    vector<int>vct={1,2,3,4,5,6,7,8,9,0};

    for(auto it=vct.begin();it!=vct.end();it++){//rbegin-rend
        cout << *it << endl;
    }
    cout << "Tamanho do vector: " << vct.size() << endl;
    cout << "Tamanho MAXIMO do vector: " << vct.max_size() << endl;

    //vct.resize(5)

    return 0;
}
