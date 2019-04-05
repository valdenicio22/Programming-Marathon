#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, p=0;
    scanf("%d", &x);
    int v[x];
    scanf("%d", &v[0]);
    int m = v[0];
    for(int i=1;i<x;i++){
        scanf("%d", &v[i]);
        if (v[i] < m) {
            m = v[i];
            p = i;
        }
    }
    printf("Menor valor: %d\n", m);
    printf("Posicao: %d\n", p);

return 0;
}
