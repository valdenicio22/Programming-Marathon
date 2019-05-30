#include <stdio.h>

int main(){

    int x, y, i, sum=0, cont=0;
    scanf("%d%d", &x, &y);
    while(y<=x) scanf("%d", &y);
    for (i=x;i<=y;i++){
        cont++;
        sum += i;
        if (sum>=y) break;
    }
    printf("%d\n", cont);

return 0;
}
