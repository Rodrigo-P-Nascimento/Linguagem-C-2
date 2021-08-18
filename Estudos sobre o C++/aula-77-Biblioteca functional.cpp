#include <iostream>
#include <functional>

using namespace std;

double divisao (double x, double y) {return x/y;}

class Exemplo{
public:
    int num;
    Exemplo(int n):num(n){};
    int dobro(){return num*2;}
};

int main () {
    /*================================> BIND <===================================
    using namespace std::placeholders;    // adds visibility of _1, _2, _3,...
    // binding functions:

    auto fn_five = bind (divisao,10,2);               // returns 10/2
    cout << fn_five() << '\n';                          // 5

    auto fn_half = bind (divisao,_1,2);               // returns x/2
    cout << fn_half(10) << '\n';                        // 5

    auto fn_invert = bind (divisao,_2,_1);            // returns y/x
    cout << fn_invert(10,2) << '\n';                    // 0.2

    auto fn_rounding = bind<int> (divisao,_1,_2);     // returns int(x/y)
    cout << fn_rounding(10,3) << '\n';                  // 3
    ==========================================================================*/

    /*================================> CREF <===================================
    int n1=10;
    auto n2=cref(n1);
    n1++;
    cout << "n1: " << n1 << "\tn2: " << n2 << endl;
    ==========================================================================*/
    Exemplo n{10};
    Exemplo n2{150};

    auto dobro2=mem_fn(&Exemplo::dobro);

    cout << dobro2(n) <<endl;
    cout << dobro2(n2) <<endl;

    return 0;
}
