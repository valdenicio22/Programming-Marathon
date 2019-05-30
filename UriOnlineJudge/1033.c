#include <stdio.h>

int main(){

    int me, ma, aux, i;
    scanf("%d%d", &me, &ma);
    if (me>ma){
        aux= me;
        me = ma;
        ma = aux;
    }
    for(i=me+1;i<ma;i++){
        if (i%5==2 || i%5==3)
            printf("%d\n", i);
    }


return 0;
}
