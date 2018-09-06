#include <bits/stdc++.h>
#define max 99999
using namespace std;

int main(){

    int n, s, t, ant=max;
    scanf("%d%d", &n, &s);
    for(int i=0;i<n;i++){
        scanf("%d", &t);
        s += t;
        if (s < ant)
            ant = s;
    }
    printf("%d\n", ant);


return 0;
}
