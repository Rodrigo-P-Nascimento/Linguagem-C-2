#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Pessoa{
    string nome;
    int idade;
};

class Veiculo{
public:
    int tipo;
    string nome;
};

int main(){

    int num{10};
    int vetor[]{1,2,3,4,5,6,7,8,9};

    string nome{"Rodrigo"};
    vector<int>valores{1,2,3,4,5};
    map<string, string>capitais{{"MG", "Belo Horizonte"}};

    Pessoa p1{"Rafael", 25};
    Veiculo v1{1, "Monza"};
    cout << "\n";
    for(vector<int>::iterator it=valores.begin(); it!=valores.end(); it++){
        cout << *it << endl;
    }
    cout << "\n";
    for(auto v:vetor){
        cout << v << endl;
    }
    cout << "\n";
    cout << p1.nome << "-" << p1.idade <<endl;
    cout << v1.tipo << "-" << v1.nome << endl;


    return 0;
}
