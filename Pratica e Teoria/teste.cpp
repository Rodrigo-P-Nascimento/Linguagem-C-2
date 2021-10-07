/*
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

class C : public A
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

A plain
C virtual
B plain
C virtual


#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main(){

    vector<int>num(5);

    try{
        num.at(6) = 10;
        cout << num[6] << endl;
    }catch(exception& e){ //a variavél | e | é só um placeholder pode ser qq outro nome
        cout << "Erro: " << e.what() << endl; // what() retorna o tipo de erro!
        //SAIDA: Erro: vector::_M_range_check: __n (which is 6) >= this->size() (which is 5)
    }
}
*/
#include <iostream>

using namespace std;

double divide(double n1, double n2){
    if(n2 == 0){
        throw "Divisao por zero";
    }
    if(n1 >= 10){
        throw "N1 precisa ser menor do que 10";
    }

    return n1/n2;
}

int main(){

    double n1, n2;

    cin >> n1 >> n2;

    try{
        cout << divide(n1, n2) << endl;
    }
    catch(const char* e){
        cout << "Erro: " << e << '\n';
    }
}