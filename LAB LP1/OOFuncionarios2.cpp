#include <iostream>
#include <string>

using namespace std;

class Funcionarios{
private:
    string nome;
    string sobrenome;
    float salarioM;
public:
    //Construtor
    Funcionarios();
    Funcionarios(string nome, string sobrenome, float salarioM);
    //seteres
    void setNome(string nome);
    void setSobrenome(string sobrenome);
    void setSalarioM(float salarioM);
    //Geteres
    string getNome();
    string getSobrenome();
    float getSalarioM();
    //Metodos
    float getSalarioAnual(float salarioM);
    void aumentoSalario(float percent);
};

void Funcionarios::setNome(string nome){
    this->nome = nome;
}
void Funcionarios::setSobrenome(string sobrenome){
    this->sobrenome = sobrenome;
}
void Funcionarios::setSalarioM(float salarioM){
    this->salarioM = salarioM;
}

string Funcionarios::getNome(){
    return nome;
}
string Funcionarios::getSobrenome(){
    return sobrenome;
}
float Funcionarios::getSalarioM(){
    return salarioM;
}
float Funcionarios::getSalarioAnual(float salarioM){
    return (salarioM*12);
}
void Funcionarios::aumentoSalario(float percent){
    float newSalario;
    newSalario = salarioM  + (salarioM * percent);

    setSalarioM(newSalario);
}
Funcionarios::Funcionarios(){
}
Funcionarios::Funcionarios(string nome, string sobrenome, float salarioM){
    setNome(nome);
    setSobrenome(sobrenome);

    if(salarioM <= 0){
        setSalarioM(0);
    }else{
        setSalarioM(salarioM);
    }
}//end Class Funcionarios

int main(){

    int num, i;
    string name;
    float salario;

    cin >> num;

    Funcionarios func[num];

    for(i=0; i < num; i++){
        cin >> name;
        func[i].setNome(name);
        cin >> name;
        func[i].setSobrenome(name);
        cin >> salario;
        func[i].setSalarioM(salario);
    }

    for(i=0; i < num; i++){
        cout << func[i].getNome() << " " << func[i].getSobrenome() << " - " << func[i].getSalarioM() << " - " << func[i].getSalarioAnual(func[i].getSalarioM()) << endl;
        func[i].aumentoSalario(0.1);

        cout << func[i].getSalarioAnual(func[i].getSalarioM()) << endl;
    }

    return 0;
}// end Main()