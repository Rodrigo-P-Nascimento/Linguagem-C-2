#include <iostream>

using namespace std;

class Imovel{
protected:
    string nome;
    float valorImovel;
    string disponibilidade;
public:
    Imovel();
    Imovel(string nome);
};

Imovel::Imovel(){
}
Imovel::Imovel(string nome){
    this->nome = nome;
}//End classa Imovel

class Casa : public Imovel{
protected:
    int numPavimentos;
    int numQuartos;
    float areaTerreno;
    float areaConstruida;
public:
    Casa(string nome);
    void exibeAtributos();
    void lerAtributos();
};

Casa::Casa(string nome) 
    : Imovel(nome){
}
void Casa::exibeAtributos(){
    cout << "Casa para "<< disponibilidade << ". "<< numPavimentos << ", " << numQuartos << ", "<< areaTerreno << "m2 de área de terreno e " << areaConstruida << "m2 de área construída. R$ "<< valorImovel << endl;
}
void Casa::lerAtributos(){
    cin >> valorImovel;
    cin.ignore();
    getline(cin, disponibilidade);
    cin >> numPavimentos;
    cin >> numQuartos;
    cin >> areaTerreno;
    cin >> areaConstruida; 
}//End class Casa

class Apartamento : public Imovel{
protected:
    float area;
    int numQuartos;
    int andar;
    float valorCondominio;
    int vagasGaragem;
public:
    Apartamento(string nome);
    void exibeAtributos();
    void lerAtributos();
};

Apartamento::Apartamento(string nome) 
    : Imovel(nome){
}
//Apartamento para aluguel. 150m2 de área, 3 quartos, 12 andar(es), 300 de condomínio, 1 vaga(s) de garagem. R$ 1500.

void Apartamento::exibeAtributos(){
     cout << "Apartamento para "<< disponibilidade << ". "<< area << "m2 de área, " << numQuartos << " quartos, "<< andar << " andar(es), " << valorCondominio << " de condomínio, "<< vagasGaragem << " vaga(s) de garagem. R$ "<< valorImovel <<endl;
}
void Apartamento::lerAtributos(){
    
}







int main(){




    return 0;
}