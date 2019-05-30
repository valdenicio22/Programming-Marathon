#include <stdio.h>

int main(){

    int x,i,j;
    scanf("%d", &x);
    for(i=0, j=0;i<1000;i++, j++){
        printf("N[%i] = %d\n", i, j);
        if(j==x-1) j=-1;
    }

return 0;
}
