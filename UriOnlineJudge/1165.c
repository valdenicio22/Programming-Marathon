#include <stdio.h>

int main(){

    int x,i,j,n;
    scanf("%d", &x);
    for(i=0;i<x;i++){
        int cont=0;
        scanf("%d", &n);
        for(j=1;j<=n;j++){
            if(n%j==0)
                cont++;
        }
        if(cont == 2) printf("%d eh primo\n", n);
        else printf("%d nao eh primo\n", n);
    }

return 0;
}
