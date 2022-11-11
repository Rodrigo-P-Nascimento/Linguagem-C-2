#include <cstdio>
#include <cstdlib>
#include <vector>
#define MAXN 1000010

using namespace std;
vector <int> G[MAXN];
int main(){
    int n, m, k, v, a;
    while(scanf("%d%d", &n, &m) != EOF){
        for(int i = 1; i<=MAXN; i++)
            G[i].clear();
        for(int i = 1; i <= n; i++){
            scanf("%d", &a);
            G[a].push_back(i);
        }
        for(int i = 1; i <= m; i++){
            scanf("%d%d", &k, &v);
            k--;
            if(k >= G[v].size())
                printf("0\n");
            else
                printf("%d\n", G[v][k]);
        }
    }
    return 0;
}