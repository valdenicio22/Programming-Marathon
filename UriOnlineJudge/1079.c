#include <stdio.h>

int main(){

    int x, i;
    double n1, n2, n3, m;
    scanf("%d", &x);
    for (i=0;i<x;i++){
        scanf("%lf%lf%lf", &n1, &n2, &n3);
        printf("%.1lf\n", ((n1*2)+(n2*3)+(n3*5))/10);
    }

return 0;
}
