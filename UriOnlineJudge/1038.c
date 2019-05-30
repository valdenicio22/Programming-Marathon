#include <stdio.h>

int main(){

    int x;
    double y;
    scanf("%d%lf", &x, &y);
    if (x == 1)
        printf("Total: R$ %.2lf\n", (y*4.0));
    else if (x == 2)
        printf("Total: R$ %.2lf\n", (y*4.5));
    else if (x == 3)
        printf("Total: R$ %.2lf\n", (y*5.0));
    else if (x == 4)
        printf("Total: R$ %.2lf\n", (y*2.0));
    else if (x == 5)
        printf("Total: R$ %.2lf\n", (y*1.5));

return 0;
}
