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
    ~Insumo();
};

Insumo::Insumo()
{
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
    Vacina();
    ~Vacina();
};

Vacina::Vacina()
    : Insumo()
{
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
    Medicamento();
    ~Medicamento();
};

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
    EPI();
    ~EPI();
};

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

    //Local lock;
    cout << "Ola cara " << endl;

    return 0;
}
