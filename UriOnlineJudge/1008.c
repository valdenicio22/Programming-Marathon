#include <stdio.h>

int main(){

    int n;
    double h, s;
    scanf("%d%lf%lf", &n, &h, &s);
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2lf\n", h*s);

return 0;
}
