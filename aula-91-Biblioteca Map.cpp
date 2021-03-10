#include <iostream>
#include <map>

using namespace std;

int main(){

    map<int,string>mp;
    map<int,string>::iterator it;

    mp[0]="Branco";
    mp[1]="Verde";
    mp[2]="Azul";
    mp[3]="Amarelo";
    mp[4]="Vermelho";

    cout << "Com um auto\n\n";

    for(auto x:mp){
        cout << x.first << " - " << x.second << endl;
    }

    cout << "\nCom um iterator\n\n";

    for(it=mp.begin();it!=mp.end();it++){
        cout << it->first << " - " << it->second << endl;
    }

    cout << "\nTamanho do conteiner: " << mp.size()<<endl;

    return 0;
}
