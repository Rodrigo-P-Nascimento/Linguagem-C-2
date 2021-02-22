#include <iostream>
#include <map>

using namespace std;

int main(){

    map <int, string> produto;
    map <int, string>::iterator it_map;

    produto[0]="Mouse";
    produto[1]="Monitor";
    produto[2]="Headset";
    produto[3]="GPU";

    // ou

    produto.insert(pair<int, string> (4,"CPU"));
    produto.insert(pair<int, string> (5,"RAM"));

    //produto.erase(3); apaga
    //caso queira apagar o map use o .clear()

    it_map = produto.find(5);
    if(it_map == produto.end()){
        cout << "Produto nao encontrado\n";
    }else{
        cout << "Produto em estoque\n";
        cout << "Codigo: "<<it_map->first << "\nProduto: "<<it_map->second << endl;
    }

    for(auto i:produto){
        cout << i.first<< " - "<< i.second<<  endl;

    }

	return 0;
}
