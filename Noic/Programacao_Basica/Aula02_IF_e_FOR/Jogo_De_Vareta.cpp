#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    int c, qtd, t=0;
    double sum=0;
    scanf("%d", &n);r
    for(int i=0;i<n;i++){
        scanf("%d%d", &c, &qtd);
        if (qtd >=4) {
            t += qtd/4;
            qtd = qtd/4;
        }
        if (qtd > 1) sum += 0.5;
    }
    t += sum;
    printf("%d\n", t);
return 0;
}
