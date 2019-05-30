#include <stdio.h>

int main(){

    int x, i;
    scanf("%d", &x);
    double a,b;
    for(i=0;i<x;i++){
        scanf("%lf%lf", &a, &b);
        if (b == 0) printf("divisao impossivel\n");
        else printf("%.1lf\n", a/b);
    }

return 0;
}
