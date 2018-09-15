#include <stdio.h>

int main(){

    int x, i, m=-1, aux=0;
    for(i=1;i<=100;i++){
        scanf("%d", &x);
        if (x > m){
            m=x;
            aux = i;
        }
    }
    printf("%d\n%d\n", m, aux);


return 0;
}
