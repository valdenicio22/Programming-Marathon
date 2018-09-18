#include <stdio.h>

int main(){

    int me, ma, aux, sum=0, i;
    scanf("%d%d", &me, &ma);
    if (me>ma){
        aux= me;
        me = ma;
        ma = aux;
    }
    for(i=me;i<=ma;i++)
        if(i%13!=0) sum +=i;
    printf("%d\n", sum);

return 0;
}
