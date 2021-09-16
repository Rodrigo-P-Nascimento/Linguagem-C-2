#include <iostream>
#include <stdio.h> //chamei somente para usar a função sprintf

using namespace std;

class Data3{
private:
    int dia, mes, ano;
public:
    //Contrutores
    Data3();
    Data3(int dia, int mes, int ano);
    //seteres
    void setDia(int dia);
    void setMes(int mes);
    void setAno(int ano);
    //geteres
    string getDia();
    string getMes();
    string getAno();
    //Metodos
    int getDaysMonth(int mes);
    void avancarDia();
};
// ___ Set ___
void Data3::setDia(int dia){
    this->dia = dia;
}
void Data3::setMes(int mes){
    this->mes = mes;
}
void Data3::setAno(int ano){
    this->ano = ano;
}
// ___ Get ___
string Data3::getDia(){
    char d[4];
    sprintf(d, "%02d", dia);
    return d;
}
string Data3::getMes(){
    char m[4];
    sprintf(m, "%02d", mes);
    return m;
}
string Data3::getAno(){
    char a[6];
    sprintf(a, "%04d", ano);
    return a;
}
// ___ Metodos ___
int Data3::getDaysMonth(int mes){
        switch (mes){
        case 1:
            return 31;
        case 2:
            return 28;
        case 3:
            return 31;
        case 4:
            return 30;
        case 5:
            return 31;
        case 6:
            return 30;
        case 7:
            return 31;
        case 8:
            return 31;
        case 9:
            return 30;
        case 10:
            return 31;
        case 11:
            return 30;
        case 12:
            return 31;
        default:
            return 31;
        
    }
}
Data3::Data3(){
}
Data3::Data3(int dia, int mes, int ano){
    if(dia > 0 && dia <= getDaysMonth(mes)){
        this->dia = dia;
    }else{
        cout << "Atributo dia Inválido" << endl;
        this->dia = 1;
    }
    if(mes < 1 || mes > 12){
        cout << "Atributo mês Inválido" << endl;
        this->mes = 1;
    }else{
        this->mes = mes;
    }
    if(ano < 1){
        cout << "Atributo ano Inválido" << endl;
        this->ano = 1; 
    }else{
        this->ano = ano;
    }
}
void Data3::avancarDia(){
    if((dia+1) <= getDaysMonth(mes)){
        dia++;
    }else{
        dia = 1;
        if((mes+1) <= 12){
            mes++;
        }else{
            mes = 1;
            ano++;
        }
    }
}//end Class Data3

int main(){

    int day, month, year, num;

    cin >> day >> month >> year >> num;

    Data3 data = Data3(day, month, year);

    for(int i=0; i < num; i++){
        data.avancarDia();
    }

    cout << data.getDia() << "/" << data.getMes() << "/" << data.getAno() << endl;

    return 0;
}//end main()

