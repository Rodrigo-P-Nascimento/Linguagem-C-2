#include <iostream>
#include <vector>
#include <algorithm>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    vector<int>vt={2,4,12,7,8,41,6,6,70,0};
    sort(vt.begin(), vt.end());

    for(auto x:vt){
        cout << x << " ";
    };
    cout << "\n\n";

    /*
    //all_of = Retorna true se o teste retornar true com todos os elementos da cole��o
    if(all_of(vt.begin(), vt.end(),[](int i){return i<50;})){
        cout << "Todos os elementos s�o menores do que 50.\n";
    }else{
        cout << "Existe um ou mais elementos maiores do que 50.\n";
    }
    //any_of = Retorna true se o teste retornar true pelo menos com um dos elementos da cole��o
    if(any_of(vt.begin(), vt.end(), [](int i){return i>120;})){
        cout << "Existe um ou mais elementos maiores do que 120.\n";
    }else{
        cout << "Todos os elementos s�o menores ou iguais a 120.\n";
    }
    //none_of = Retorna false se o teste retornar false pelo menos com um dos elementos da cole��o
    if(none_of(vt.begin(), vt.end(),[](int i){return i<0;})){
        cout << "Todos s�o positivos\n";
    }else{
        cout << "Existe um ou mais elementos negativos\n";
    }
    */
    /*
    //for_each = Aplica uma fun��o a todos os elementos da cole��o
    cout << "Dobro" << endl;
    for_each(vt.begin(), vt.end(), [](int i){ cout << i*2 << " ";});
    cout << "\n\n";
    */
    /*
    //find = Procura um elemento e retorna um iterador com o resultado
    auto it=find(vt.begin(), vt.end(), 12);
    cout << *it << endl << endl;

    //find_if = Procura um elemento que atenda a uma determinada condi��o e retorna um iterador
    auto it2=find_if(vt.begin(), vt.end(), [](int i){return ((i%2)==1);});
    cout << "Primeiro elemento �mpar da cole��o: " << *it2 << endl << endl;

    //find_if_not = Procura um elemento que N�O atenda a uma determinada condi��o e retora um iterador
    auto it3=find_if_not(vt.begin(), vt.end(), [](int i){return ((i%2)==1);});
    cout << "Primeiro elemento par da cole��o: " << *it3 << endl << endl;
    */
    /*
    //count = Quantidade de um determinado elemento na cole��o
    cout << "Quantidade de numeral 6: " << count(vt.begin(), vt.end(), 6) << endl << endl;
    */
    //count_if = Quantidade de um determinado elemento na cole��o, com uma condi��o
    cout << "Quantidade de n�meros pares: " << count_if(vt.begin(), vt.end(), [](int i){return ((i%2)==0);}) << endl;

    return 0;
}
