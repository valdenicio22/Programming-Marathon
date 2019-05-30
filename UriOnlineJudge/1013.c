#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c, m=0;
    scanf("%d%d%d", &a, &b, &c);
    m = (a+b + abs(a-b))/2;
    m = (m+c + abs(m-c))/2;
    printf("%d eh o maior\n", m);

return 0;
}
