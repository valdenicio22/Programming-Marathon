#include <stdio.h>

int main(){

    int n,i,x,y,j;
    scanf("%d", &n);
    for (i=0;i<n;i++){
        int sum=0;
        scanf("%d%d", &x, &y);
        if (x%2==0) x++;
        for (j=0;j<y;j++, x+=2) sum+=x;
        printf("%d\n", sum);
    }

return 0;
}
