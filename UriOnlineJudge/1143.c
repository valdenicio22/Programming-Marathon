#include <stdio.h>

int main(){
    int x, i=1;
    scanf("%d", &x);
    for(i=1;i<=x;i++)
        printf("%d %d %d\n", i, (i*i), (i*i*i));
return 0;
}
