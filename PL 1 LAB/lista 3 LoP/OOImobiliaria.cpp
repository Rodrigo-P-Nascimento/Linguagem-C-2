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
    cout << "Casa para "<< disponibilidade << ". "<< numPavimentos << " pavimentos, " << numQuartos << " quartos, "<< areaTerreno << "m2 de área de terreno e " << areaConstruida << "m2 de área construída. R$ "<< valorImovel << "." << endl;
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

void Apartamento::exibeAtributos(){
    cout << "Apartamento para "<< disponibilidade << ". "<< area << "m2 de área, " << numQuartos << " quartos, "<< andar << " andar(es), " << valorCondominio << " de condomínio, "<< vagasGaragem << " vaga(s) de garagem. R$ "<< valorImovel << "." <<endl;
}
void Apartamento::lerAtributos(){
    cin >> valorImovel;
    cin.ignore();
    getline(cin, disponibilidade);
    cin >> area;
    cin >> numQuartos;
    cin >> andar;
    cin >> valorCondominio;
    cin >> vagasGaragem; 
}//End class Apartamento

class Terreno : public Imovel{
protected:
    float area;
public:
    Terreno(string nome);
    void exibeAtributos();
    void lerAtributos();
};

Terreno::Terreno(string nome) 
    : Imovel(nome){
}
void Terreno::exibeAtributos(){
    cout << "Terreno para " << disponibilidade << ". " << area << "m2 de área de terreno. R$ " << valorImovel << "." << endl;
}
void Terreno::lerAtributos(){
    cin >> valorImovel;
    cin.ignore();
    getline(cin, disponibilidade);
    cin >> area;
}//End class Terreno

int main(){

    int numImoveis, tipo;

    Casa cs = Casa("Casa");
    Apartamento ap = Apartamento("Apartamento");
    Terreno tr = Terreno("Terreno");

    cin >> numImoveis;

    for(int i=0; i < numImoveis; i++){
        cin >> tipo;

        if(tipo == 1){
            cs.lerAtributos();
            cs.exibeAtributos();
        }else if(tipo == 2){
            ap.lerAtributos();
            ap.exibeAtributos();
        }else if(tipo == 3){
            tr.lerAtributos();
            tr.exibeAtributos();
        }
    }

    return 0;
}