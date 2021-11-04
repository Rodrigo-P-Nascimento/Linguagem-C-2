#include <iostream>

using namespace std;
/*
template <class T>
T maior (T n1, T n2){
    return (n1 > n2) ? n1 : n2;
}

int main(){
    int i1, i2;
    float f1, f2;
    char c1, c2;

    cout << "Enter two integers: \n";
    cin >> i1 >> i2;
    cout << maior (i1, i2) <<" is larger." << endl;
    cout << "\nEnter two floating point numbers: \n";
    cin >> f1 >> f2;
    cout << maior (f1, f2)<<" is larger." << endl;
    cout << "\nEnter two characters: \n";
    cin >> c1 >> c2;
    cout << maior (c1, c2) << " has larger ASCII value";

    return 0;
}
*/
template <class T>
class Calculator{
private:
    T num1, num2;
public:
    Calculator( T n1, T n2){
        num1 = n1;
        num2 = n2;
    }

    T add() { return num1 + num2; }
    T subtract() { return num1 - num2; }
    T multiply() { return num1 * num2; }
    T divide() { return num1 / num2; }
};

int main(){
    Calculator<int >intCalc = Calculator<int>(2,1);
    Calculator<float> floatCalc = Calculator<float>(2.4, 0.667);
    cout << "Int results:" << intCalc.add() << endl;
    cout << "Float results:" << floatCalc.add() << endl;

    return 0;
}