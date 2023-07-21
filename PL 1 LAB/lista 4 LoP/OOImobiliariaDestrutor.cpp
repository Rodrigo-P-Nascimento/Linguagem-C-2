#include <iostream>
#include <vector>

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

void Imovel::exibeAtributos(){
}
void Imovel::lerAtributos(){
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
}//End class Imovel

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
}//end classe Casa

class Apartamento : public Imovel{
protected:
    int andar;
    int numQuartos;
    int vagasGaragem;
    float area;
    float valorCondominio;
public:
    //Metodos
    virtual void exibeAtributos();
    virtual void lerAtributos();
    //Destrutor e Construtor
    Apartamento();
    virtual ~Apartamento();
};

void Apartamento::exibeAtributos(){
    cout << nome << " para " << disponibilidade << ". " << area << "m2 de área, " << numQuartos << " quartos, " << andar << " andar(es), " << valorCondominio << " de condomínio, " << vagasGaragem << " vaga(s) de garagem. R$ " << valor << "." <<endl;
}
void Apartamento::lerAtributos(){
    cin >> valor;
    cin.ignore();
    getline(cin, disponibilidade);
    cin >> area;
    cin >> numQuartos;
    cin >> andar;
    cin >> valorCondominio;
    cin >> vagasGaragem;
}
Apartamento::Apartamento()   
    : Imovel(){
    this->nome = "Apartamento";
    this->tipo = 2;
}
Apartamento::~Apartamento(){
    cout << "Deletando Apartamento" << endl;
}//End class Apartamento

class Terreno : public Imovel{
protected:
    float area;
public:
    //Metodos
    virtual void exibeAtributos();
    virtual void lerAtributos();
    //Destrutor e Construtor
    Terreno();
    virtual ~Terreno();
};

void Terreno::exibeAtributos(){
    cout << nome << " para " << disponibilidade << ". " << area << "m2 de área de terreno. R$ " << valor << "." << endl;
}
void Terreno::lerAtributos(){
    cin >> valor;
    cin.ignore();
    getline(cin, disponibilidade);
    cin >> area;
}
Terreno::Terreno()   
    : Imovel(){
    this->nome = "Terreno";
    this->tipo = 3;
}
Terreno::~Terreno(){
    cout << "Deletando Terreno" << endl;
}//End class Terreno

class Imobiliaria{
protected:
    vector<Imovel*> imoveis;
public:
    //Metodos
    void addImovel(Imovel* imovel);
    void buscaImovel(string busca);
    //Construtores e Destrutores
    Imobiliaria();
    ~Imobiliaria();
};
void Imobiliaria::addImovel(Imovel* imovel){
    imoveis.push_back(imovel);
}
void Imobiliaria::buscaImovel(string busca){
    for(auto& it : imoveis){
        if(it->getNome().find(busca) != string::npos || it->getDisponibilidade().find(busca) != string::npos){
            it->exibeAtributos();
        }
    }
}
Imobiliaria::Imobiliaria(){
}

Imobiliaria::~Imobiliaria(){
    cout << "Deletando Imobiliária" << endl;
    for(auto& it : imoveis){
        it->~Imovel();
    }
    imoveis.clear();
}//End class Imobiliaria

int main(){

    int n, tipo;
    string busca;
    Imobiliaria im;
    Imovel *imov;

    cin >> n;

    for(int i=0; i < n; i++){
        cin >> tipo;

        if(tipo == 1) imov = new Casa();
        else if(tipo == 2) imov = new Apartamento();
        else if(tipo == 3) imov = new Terreno();

        imov->lerAtributos();
        im.addImovel(imov);
    }
    cin.ignore();
    getline(cin, busca);
    im.buscaImovel(busca);
    
    return 0;
}