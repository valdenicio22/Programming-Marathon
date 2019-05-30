#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, a, b;
    scanf("%d", &x);
    for(int i=0;i<x;i++){
        int aux=0, sum=0;
        scanf("%d%d", &a, &b);
        if (b > a){
            aux = b;
            b = a;
            a = aux;
        }
        for(int j=b+1;j<a;j++){
            if (j%2==1) sum+=j;
        }
        printf("%d\n", sum);
    }

return 0;
}
