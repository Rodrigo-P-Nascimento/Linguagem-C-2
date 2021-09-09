#include <iostream>

using namespace std;

class Data{

public:
    Data();//Construtor
    void printData(int dia, int mes, int ano);

    //Seters
    void setDia(int dia);
    void setMes(int mes);
    void setAno(int ano);
    //Geteres
    int getDia();
    int getMes();
    int getAno();

private:
    int dia;
    int mes;
    int ano;
};

Data::Data(){
    this->dia=1;
    this->mes=1;
    this->ano=1;
}
void Data::setDia(int dia){
    this->dia = dia;
}
void Data::setMes(int mes){
    this->mes = mes;
}
void Data::setAno(int ano){
    this->ano = ano;
}
int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}

void Data::printData(int dia, int mes, int ano){
    string meses[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto" , "Setembro", "Outubro", "Novembro", "Dezembro"}; //Array de strings para usar como banco de dados
    string mmes;

    if(mes > 12 || mes < 1){
        mmes = "Indefinido";
    }else{
        mmes = meses[mes-1]; // -1 pq o array começa em 0
    }

    cout << this->dia << " de " << mmes << " de " << this->ano << endl;
}//end printData
//end Class Data

int main(){

    Data d1;
    int dia, mes, ano;

    cin >> dia >> mes >> ano;

    d1.setDia(dia);
    d1.setMes(mes);
    d1.setAno(ano);

    d1.printData(d1.getDia(),d1.getMes(), d1.getAno());
    
    return 0;
}//End main