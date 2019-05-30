#include <stdio.h>

int main(){

    double x, sum=0, cont=0;
    while(5>2){
        scanf("%lf", &x);
        if (x >=0 && x <= 10){
            cont++;
            sum += x;
        }
        else printf("nota invalida\n");
        if (cont == 2) break;
    }
    printf("media = %.2lf\n", sum/cont);

return 0;
}
