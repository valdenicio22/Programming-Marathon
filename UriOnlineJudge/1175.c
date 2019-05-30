#include <stdio.h>

int main(){

    int v[20],i,j;
    for(i=0;i<20;i++){
        scanf("%d", &v[i]);
    }
    for(i=20-1, j=0 ;i>=0; i--, j++){
        printf("N[%d] = %d\n", j, v[i]);
    }

return 0;
}
