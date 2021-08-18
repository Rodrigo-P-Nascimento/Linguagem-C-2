#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <string>produtos = {"mouse", "teclado", "monitor","gabinete", "cx.som"};
    vector <string>::iterator it;

    //it=produtos.begin();
    //it=produtos.end()-1;

    //advance();-ela avanca uma quantida X de casas de uma coleção
    //next();-vc usa direto no cout
    //prev();

    //advance(it, 1);
    //cout << *it <<endl;

    //cout << *next(it, 3) <<endl;

    //cout << *prev(it, 0) <<endl;

    for(it=produtos.begin();it!=produtos.end();it++){
        cout << *it <<endl;
    }

	return 0;
}
