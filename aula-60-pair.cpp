#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main(){

    //pair <int, string> par(10, "Aula");
    //par.first=100;
    //par.second="Github";
    //cout << par.first << "-" << par.second << endl;

    //--------------------------------------------------
    /*
    pair <int, string> par[2];
    par[0].first=12;
    par[0].second="Tatu";
    par[1]=make_pair(56, "Anta");

    cout << par[0].first << "-" << par[0].second << endl;
    cout << par[1].first << "-" << par[1].second << endl;
    */
    //--------------------------------------------------
    /*
    pair <int,pair<string, double>> par[3];

    par[0]=make_pair(10, make_pair("Mouse", 45.55));
    par[1]=make_pair(5, make_pair("Headset", 99.99));
    par[2]=make_pair(8, make_pair("Teclado", 79.99));

    for(int i=0;i<3;i++){
        cout << par[i].first << " - " << par[i].second.first << " - " << par[i].second.second << endl;
    }
    */
    //--------------------------------------------------
    vector < pair<int, string> >prod;

    prod.push_back(make_pair(12, "Mouse"));
    prod.push_back(make_pair(17, "Teclado"));
    prod.push_back(make_pair(11, "Monitor"));

    for(auto i:prod){
        cout << i.first << " - " << i.second<< endl;
    }

	return 0;
}
