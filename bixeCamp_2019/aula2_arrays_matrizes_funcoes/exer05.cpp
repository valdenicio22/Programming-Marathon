#include <bits/stdc++.h>
#define MAXN 10005
using namespace std;

int main(){

    int n, m, v[MAXN], esq = 0;
    int ini, fim, pg, cont=0;
    cin >> n >> m;
    for(int i=1;i<=n;i++)
        cin >> v[i];
    for(int i=1;i<=m;i++){
        cont = 0;
        cin >> ini >> fim >> pg;
        esq = abs(pg - ini);
        for(int j = ini ; j <= fim ;j++){
            if (v[pg] > v[j]) cont++;
        }
        if (esq == cont) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

return 0;
}
