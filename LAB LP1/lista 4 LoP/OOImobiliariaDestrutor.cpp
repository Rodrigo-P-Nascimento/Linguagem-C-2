#include <iostream>

using namespace std;

class Imovel{
protected:
    string nome;
    float valor;
    int tipo;
    string disponibilidade;
public:
    //Metodos
    virtual void exibeAtributos();
    virtual void lerAtributos();
    //set e get
    void setNome(string nome);
    void setValor(float valor);
    void setTipo(int tipo);
    void setDisponibilidade(string disponibilidade);

    string getNome();
    float getValor();
    int getTipo();
    string getDisponibilidade();
    //Destrutor e Construtor
    Imovel();
    virtual ~Imovel();
};
// ___ set and get ___
void Imovel::setNome(string nome){
    this->nome = nome;
}
void Imovel::setValor(float valor){
    this->valor = valor;
}
void Imovel::setTipo(int tipo){
    this->tipo = tipo;
}
void Imovel::setDisponibilidade(string disponibilidade){
    this->disponibilidade = disponibilidade;
}

string Imovel::getNome(){
    return nome;
}
float Imovel::getValor(){
    return valor;
}
int Imovel::getTipo(){
    return tipo;
}
string Imovel::getDisponibilidade(){
    return disponibilidade;
}

// ___ construtores e destrutor ___
Imovel::Imovel(){
}
Imovel::~Imovel(){
    cout << "Deletando Imovel" << endl;
}

class Casa : public Imovel{
protected:
    int numPavimentos;
    int numQuartos;
    float areaTerr;
    float areaConst;
public:
    //Metodos
    virtual void exibeAtributos();
    virtual void lerAtributos();
    //Destrutor e Construtor
    Casa();
    virtual ~Casa();
};

void Casa::exibeAtributos(){
    cout << nome << " para " << disponibilidade << ". " << numPavimentos << " pavimentos, " << numQuartos << " quartos, " << areaTerr << "m2 de área de terreno e " << areaConst << "m2 de área construída. R$ " << valor << "." << endl;
}
void Casa::lerAtributos(){
    cin >> valor;
    cin.ignore();
    getline(cin, disponibilidade);
    cin >> numPavimentos;
    cin >> numQuartos;
    cin >> areaTerr;
    cin >> areaConst;
}
Casa::Casa()   
    : Imovel(){
    this->nome = "Casa";
    this->tipo = 1;
}
Casa::~Casa(){
    cout << "Deletando Casa" << endl;
}


int main(){

    Casa c1 = Casa();

    cout << "opa" << endl;

    return 0;
}