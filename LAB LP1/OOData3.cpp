#include <iostream>


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
    int getDia();
    int getMes();
    int getAno();
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
int Data3::getDia(){
    return dia;
}
int Data3::getMes(){
    return mes;
}
int Data3::getAno(){
    return ano;
}
// ___ Metodos ___
int Data3::getDaysMonth(int mes){
    if(mes < 1 || mes > 12){
        return 0;
    }else{
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
            break;
        }
    }
}
Data3::Data3(){
}
Data3::Data3(int dia, int mes, int ano){
    if(ano < 1){
        cout << "Atributo ano Inválido" << endl;
        this->ano = 1; 
    }else{
        this->ano = ano;
    }
    if(mes < 1 || mes > 12){
        cout << "Atributo mês Inválido" << endl;
        this->mes = 1;
    }else{
        this->mes = mes;
    }
    if(dia > 0 && dia <= getDaysMonth(mes)){
        this->dia = dia;
    }else{
        cout << "Atributo dia Inválido" << endl;
    }
}

int main(){




    return 0;
}

