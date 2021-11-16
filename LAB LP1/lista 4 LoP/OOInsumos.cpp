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
    int tipoInsumo;
public:
    Insumo();
    Insumo(string nome,int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante, int tipoInsumo);
    ~Insumo();
};

Insumo::Insumo()
{
}

Insumo::Insumo(string nome,int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante, int tipoInsumo){
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
    int tipo;
    int quantDoses;
    int intervalo;
public:
    Vacina(string nome,int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante, int tipoInsumo,int tipo, int quantDoses, int intervalo);
    Vacina();
    ~Vacina();
};

Vacina::Vacina(string nome,int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante, int tipoInsumo,int tipo, int quantDoses, int intervalo)
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
    Medicamento(string nome,int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante, int tipoInsumo,string dosagem, string administracao, string disponibilizacao);
    Medicamento();
    ~Medicamento();
};

Medicamento::Medicamento(string nome,int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante, int tipoInsumo,string dosagem, string administracao, string disponibilizacao)
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
    int tipo;
    string descricao;
public:
    EPI(string nome,int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante, int tipoInsumo,int tipo, string descricao);
    EPI();
    ~EPI();
};

EPI::EPI(string nome,int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante, int tipoInsumo,int tipo, string descricao)
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
    insumosVec.clear();
    //for(auto it=insumosVec.begin(); it != insumosVec.end(); it++){
}

int main(){

    Local loc;

    string nome;
    int quantidade;
    int valorUnitario;
    string dtVencimento;
    string nomeFabricante;
    int tipoInsumo;

    int tipo;
    int quantDoses;
    int intervalo;

    string dosagem;
    string administracao;
    string disponibilizacao;

    int tipo;
    string descricao;

    getline(cin, nome);
    cin >> quantidade;




    return 0;
}
