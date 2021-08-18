#ifndef HERANCAMULT_H_INCLUDED
#define HERANCAMULT_H_INCLUDED

class Base1{
public:
    void impBase1();
};

class Base2{
public:
    void impBase2();
};

void Base1::impBase1(){
    std::cout << "Imp classe Base1\n";
}
void Base2::impBase2(){
    std::cout << "Imp classe Base2\n";
}

class EU:public Base1, public Base2{

};
#endif // HERANCAMULT_H_INCLUDED
