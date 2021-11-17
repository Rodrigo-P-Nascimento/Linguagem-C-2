#include <iostream>
#include <vector>

using namespace std;

class Insumo{
protected:
    string nome;
    int quantidade;
    int valorUnitario;
    string dtVencimento;
    string nomeFabricante;
    string tipoInsumo;
public:
    Insumo();
    Insumo(string nome,int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante, string tipoInsumo);
    virtual ~Insumo();
};

Insumo::Insumo()
{
}

Insumo::Insumo(string nome,int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante, string tipoInsumo){
    this->nome = nome;
    this->quantidade = quantidade;
    this->valorUnitario = valorUnitario;
    this->dtVencimento = dtVencimento;
    this->nomeFabricante = nomeFabricante;
    this->tipoInsumo = tipoInsumo;
}

Insumo::~Insumo(){
    cout << "Deletando Insumos" << endl;
}//End class Insumos

class Vacina : public Insumo{
private:
    string tipo;
    int quantDoses;
    int intervalo;
public:
    Vacina(string nome,int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante, string tipoInsumo,string tipo, int quantDoses, int intervalo);
    Vacina();
    virtual ~Vacina();
};

Vacina::Vacina(string nome,int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante, string tipoInsumo,string tipo, int quantDoses, int intervalo)
    : Insumo(nome,quantidade,valorUnitario,dtVencimento,nomeFabricante,tipoInsumo)
{
    this->tipo = tipo;
    this->quantDoses = quantidade;
    this->intervalo = intervalo;
}

Vacina::Vacina()
    : Insumo(){
}

Vacina::~Vacina(){
    cout << "Deletando Vacina" << endl;
}//End class Vacina

class Medicamento : public Insumo{
private:
    string dosagem;
    string administracao;
    string disponibilizacao;
public:
    Medicamento(string nome,int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante, string tipoInsumo,string dosagem, string administracao, string disponibilizacao);
    Medicamento();
    virtual ~Medicamento();
};

Medicamento::Medicamento(string nome,int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante, string tipoInsumo,string dosagem, string administracao, string disponibilizacao)
    : Insumo(nome,quantidade,valorUnitario,dtVencimento,nomeFabricante,tipoInsumo)
{
    this->dosagem = dosagem;
    this->administracao = administracao;
    this->disponibilizacao = disponibilizacao;
}

Medicamento::Medicamento()
    : Insumo()
{
}

Medicamento::~Medicamento(){
    cout << "Deletando Medicamento" << endl;
}//End class Medicamento

class EPI : public Insumo{
private:
    string tipo;
    string descricao;
public:
    EPI(string nome,int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante, string tipoInsumo,string tipo, string descricao);
    EPI();
    virtual ~EPI();
};

EPI::EPI(string nome,int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante, string tipoInsumo,string tipo, string descricao)
    : Insumo(nome,quantidade,valorUnitario,dtVencimento,nomeFabricante,tipoInsumo)
{
}

EPI::EPI()
    : Insumo()
{
}

EPI::~EPI(){
    cout << "Deletando EPI" << endl;
}//End class EPI

class Local{
private:
    string nome;
    int tipo;
    Insumo* insumoArr[3];
    vector <Insumo*> insumosVec;
public:
    void addInsumoArr(Insumo *in, int index);
    void addInsumoVec(Insumo *in);
    Local();
    ~Local();
};
void Local::addInsumoArr(Insumo *in, int index){
    insumoArr[index] = in;
}
void Local::addInsumoVec(Insumo *in){
    insumosVec.push_back(in);
}

Local::Local(){
}

Local::~Local(){
    cout << "Deletando Local" << endl;
    insumoArr[0]->~Insumo();
    insumoArr[1]->~Insumo();
    insumoArr[2]->~Insumo();
   
    for (auto&& it : insumosVec){
        delete it;
    }
   
}

int main(){

    Local loc;

    string nome;
    int quantidade;
    int valorUnitario;
    string dtVencimento;
    string nomeFabricante;
    string tipoInsumo;

    string tipo;
    int quantDoses;
    int intervalo;

    string dosagem;
    string administracao;
    string disponibilizacao;

    string tipo12;
    string descricao;

    getline(cin, nome);//Coronavac
    cin >> quantidade;//10000
    cin >> valorUnitario;//10
    cin.ignore();
    getline(cin, dtVencimento);//11/12/2021
    getline(cin, nomeFabricante);//Sinovac
    getline(cin, tipoInsumo);//MS
    getline(cin, tipo);//Virus inativo
    cin >> quantDoses;//2
    cin >> intervalo;//30

    //Vacina vacina = Vacina(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo, tipo, quantDoses, intervalo);
    loc.addInsumoVec(new Vacina(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo, tipo, quantDoses, intervalo));
    loc.addInsumoArr(new Vacina(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo, tipo, quantDoses, intervalo), 0);

    cin.ignore();
    getline(cin, nome);//Tyleno
    cin >> quantidade;//500
    cin >> valorUnitario;//5
    cin.ignore();
    getline(cin, dtVencimento);//04/05/2022
    getline(cin, nomeFabricante);//Johnson
    getline(cin, tipoInsumo);//MS
    getline(cin, dosagem);//1 compromido
    getline(cin, administracao);//2 vezes por dia
    getline(cin, disponibilizacao);//capsulas

    //Medicamento medicamento = Medicamento(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo, dosagem, administracao, disponibilizacao);
    loc.addInsumoVec(new Medicamento(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo, dosagem, administracao, disponibilizacao));
    loc.addInsumoArr(new Medicamento(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo, dosagem, administracao, disponibilizacao), 1);

    //cin.ignore();
    getline(cin, nome);//Oculos de Proteção
    cin >> quantidade;//100
    cin >> valorUnitario;//10
    cin.ignore();
    getline(cin, dtVencimento);//Inderteminada
    getline(cin, nomeFabricante);//3M
    getline(cin, tipoInsumo);//MS
    getline(cin, tipo12);
    getline(cin, descricao);

    //EPI epi = EPI(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo, tipo12, descricao);
    loc.addInsumoVec(new EPI(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo, tipo12, descricao));
    loc.addInsumoArr(new EPI(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo, tipo12, descricao), 2);

    return 0;
}
/*
Deletando EPI
Deletando Insumos
Deletando Medicamento
Deletando Insumos
Deletando Vacina
Deletando Insumos
Deletando Local
*/
