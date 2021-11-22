#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

template <class T>

class Estatistico{
public:
    int indexOfMaior(vector<T> vec){
        int maior = vec[0].getTotal();
        int index;

        for(int i = 0; i < vec.size(); i++){
            if(maior <= vec[i].getTotal()){
                maior = vec[i].getTotal();
                index = i;
            }
        }
        return index;
    }
    int indexOfMenor(vector<T> vec){
        int menor = vec[0].getTotal();
        int index;

        for(int i = 0; i < vec.size(); i++){
            if(vec[i].getTotal() < menor){
                menor = vec[i].getTotal();
                index = i;
            }
        }
        return index;
    }
    float media(vector<T> vec){
        float total=0;
        for(int i = 0; i < vec.size(); i++){
            total += vec[i].getTotal();
        }
        return total / vec.size();
    }

    Estatistico(){
    }
};

class Pedido{
private:
    float valorUnitario;
    int quantidade;
public:
    Pedido(float valor, int quant){
        valorUnitario = valor;
        quantidade = quant;
    }
    Pedido(){
    }
    float getTotal(){
        return valorUnitario * quantidade;
    }
    string ToString(){
        std::stringstream sout;

        sout << "R$ " << valorUnitario << ", quant: " << quantidade << ", total: R$ " << getTotal();

        return sout.str();
    }
};

class Livro{
private:
    string titulo;
    int totalPaginas;
public:
    Livro(string titulo, int quant){
        this->titulo = titulo;
        this->totalPaginas = quant;
    }
    string getNome(){
        return titulo;
    }
    int getTotal(){
        return totalPaginas;
    }
    string ToString(){
        std::stringstream sout;
        sout << titulo << ", páginas: " << totalPaginas;

        return sout.str();
    }
};


int main(){

    vector<Pedido> ped;
    vector<Livro> lib;

    int N, i;
    float value1;
    int value2;
    string tit;
    int total;

    cin >> N;

    for(i=0; i < N; i++){
        cin >> value1;
        cin >> value2;
        ped.push_back(Pedido(value1, value2));
    }

    cin >> N;

    for(i=0; i < N; i++){
        cin.ignore();
        getline(cin, tit);
        cin >> total;
        lib.push_back(Livro(tit, total));
    }

    Estatistico<Pedido> ESped;
    Estatistico<Livro> ESlib;

    int index = ESped.indexOfMaior(ped);
    cout << "Maior: " << ped[index].ToString() << endl;
    index = ESped.indexOfMenor(ped);
    cout << "Menor: " << ped[index].ToString() << endl;
    cout << "Média: " << ESped.media(ped) << endl;
    
    index = ESlib.indexOfMaior(lib);
    cout << "Maior: " << lib[index].ToString() << endl;
    index = ESlib.indexOfMenor(lib);
    cout << "Menor: " << lib[index].ToString() << endl;
    cout << "Média: " << ESlib.media(lib) << endl;
    
    return 0;
}
