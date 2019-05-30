#include <stdio.h>

int main(){

    int x, i, a, b,j, aux;
    scanf("%d", &x);
    for (i=0;i<x;i++){
        int sum=0;
        scanf("%d%d", &a, &b);
        if(a>b){
            aux = a;
            a = b;
            b = aux;
        }
        for (j=a+1;j<b;j++){
            if(j%2==1)
                sum+=j;
        }
        printf("%d\n", sum);
    }

return 0;
}
