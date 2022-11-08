#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> numero;
    int n;//numero de elementos do vetor
    int m;//numero de consultas
    int valor;//valores do vetor
    int k;//numero das ocorrencias do valor
    int v;//valor procurado
    int cont=0;

    /*Qual a logica aqui, vamos ter que ler o numero K da ocorrencia do numero V no vetor
        tipo k = 1 e v = 3: Em qual posicao o PRIMEIRO numero TRES esta?
             k = 2 e v = 3: Em qual posicao o SEGUNDO numero TRES esta?
        retorno: o numero dessa posicao+1, por conta do comando da questão, 
        e retornamos 0 caso nao encontramos nada
    
    */
    
    while (cin >> n >> m){
    
        for(int i=0; i < n; i++){
            cin >> valor;
            numero.push_back(valor);
        }
        for(int j=0; j < m;j++){
            cin >> k >> v;
            cont = 0;

            if(k > numero.size()){//Se k for maior do que o numero total de elementos do vetor, retornamos 0
                cout << "0" << endl;
            }else{
                for(int h=0; h < n; h++){
                    if(v == numero[h]){
                        cont++;
                    }
                    if(k == cont){
                        cout << (h+1) << endl;
                        break;
                    }
                    if((h+1) == n){
                        cout << "0" << endl;
                    }
                }
            }
        }

        numero.clear();//Apagarmos os elementos do vetor
    }
    
    return 0;
}
