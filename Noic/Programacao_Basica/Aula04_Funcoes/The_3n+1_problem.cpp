#include <bits/stdc++.h>

using namespace std;

int func (int x, int y){

    if (x > y) swap(x, y);
    int maior=0, cont=1, n1=0;
    while(x<=y){
        n1 = x;
        while(n1 != 1){
            if (n1%2 != 0) n1 = (3*n1) + 1;
            else n1 = n1/2;
            cont++;
        }
        if (cont > maior) maior = cont;
        cont = 1;
        x++;
    }
    return maior;
}
int main(){

    int n1, n2, maior=0, res=0;
    while(scanf("%d%d", &n1, &n2) != EOF){
        printf("%d %d %d\n", n1, n2, func(n1, n2));
    }
return 0;
}
