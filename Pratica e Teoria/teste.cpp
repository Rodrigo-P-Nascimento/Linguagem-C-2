/*
class DataHora{
private:
    //Composição
    Data * estaData ; // instância da classe Data
    Hora * estaHora ; // instância da classe Hora
public:
    //Construtores
    DataHora (int hora, int min, int seg , int dia, int mes , int ano);
    DataHora (int dia, int mes , int ano);
}

DataHora::DataHora (int hora, int min, int seg, int dia, int mes , int ano){
    estaData = new Data(dia, mes, ano);
    estaHora = new Hora(hora, min , seg);
}
DataHora::DataHora (int dia, int mes , int ano){
    estaData = new Data(dia, mes , ano);
    estaHora = new Hora(0, 0, 0);
}

*/
#include <iostream>

using namespace std;

class A
{
public:
    virtual void v() { cout << "A virtual" << endl; }
    void f() { cout << "A plain" << endl; }
};

class B : public A
{
public:
    virtual void v() { cout << "B virtual" << endl; }
    void f() { cout << "B plain" << endl; }
};

class C : public B
{
public:
    virtual void v() { cout << "C virtual" << endl; }
    void f() { cout << "C plain" << endl; }
};

int main(){
    
    A * a = new C;
    a->f();
    a->v();

    ((B*)a)->f();
    ((B*)a)->v();
}

/*
A plain
C virtual
B plain
C virtual
*/