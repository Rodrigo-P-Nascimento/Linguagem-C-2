#include <iostream>
#include <list>

using namespace std;

int main(){

    list <int> num{12, 45, 6, 5, 78, 900};

    num.sort();

    for(auto v : num){
        cout << v << "-";
    }

	return 0;
}
