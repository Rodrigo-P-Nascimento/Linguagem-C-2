
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

/*
A plain
C virtual
B plain
C virtual
*/