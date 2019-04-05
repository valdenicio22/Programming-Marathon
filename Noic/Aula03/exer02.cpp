#include <bits/stdc++.h>

using namespace std;

int main(){

    int v[25], res[25];
    for(int i=0;i<20;i++) scanf("%d", &v[i]);

    for(int i=0, j=20-1;i<11;i++, j--){
        res[i] = v[j];
        res[j] = v[i];
    }
    for(int i=0;i<20;i++) printf("N[%d] = %d\n", i, res[i]);


return 0;
}
