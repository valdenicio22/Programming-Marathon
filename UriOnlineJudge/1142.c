#include <stdio.h>

int main(){

    int x, i=0, aux=1;
    scanf("%d", &x);
    while(i<x){
        printf("%d %d %d PUM\n", aux, aux+1, aux+2);
        i++; aux+=4;
    }

return 0;
}
