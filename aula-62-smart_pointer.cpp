#include <iostream>
#include <memory>

using namespace std;

int main(){

    unique_ptr<int>pnum(new int);
    //shared_ptr<int>pnum=(new int);
    //shared_ptr<int>pnum2=pnum;

    *pnum=10;
    cout << *pnum << " - " << &pnum << endl;
	return 0;
}
