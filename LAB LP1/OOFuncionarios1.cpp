#include <iostream>
#include <string>

using namespace std;

class Funcionarios{

public:
    string nome;
    string sobrenome;
    float salarioM;

    Funcionarios();
    float getSalarioAnual(float salarioM);
};

Funcionarios::Funcionarios(){
}

float Funcionarios::getSalarioAnual(float salarioM){
    return (salarioM*12);
}


int main(){

    int num, i;

    cin >> num;

    Funcionarios func[num];

    for(i=0; i < num; i++){
        cin >> func[i].nome;
        cin >> func[i].sobrenome;
        cin >> func[i].salarioM;
    }

    for(i=0; i < num; i++){
        cout << func[i].nome << " " << func[i].sobrenome << " - " << func[i].salarioM << " - " << func[i].getSalarioAnual(func[i].salarioM) << endl;
    }

    return 0;
}