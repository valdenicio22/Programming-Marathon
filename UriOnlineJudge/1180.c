#include <stdio.h>

int main(){

    int x, i, v, m=99999, aux;
    scanf("%d", &x);
    for(i=0;i<x;i++){
        scanf("%d", &v);
        if(v<m){
            aux = i;
            m = v;
        }
    }
    printf("Menor valor: %d\n", m);
    printf("Posicao: %d\n", aux);


return 0;
}
