#include <stdio.h>

int main(){

    double x, sum=0;
    int f=0,cont=0;
    while(f != 2 ){
        scanf("%lf", &x);
        if (x >=0 && x<= 10){
            sum +=x;
            cont++;
        }
        else printf("nota invalida\n");
        if (cont == 2){
            printf("media = %.2lf\n", sum/cont);
            printf("novo calculo (1-sim 2-nao)\n");

            while(scanf("%d", &f) && f < 1 || f > 2)
                printf("novo calculo (1-sim 2-nao)\n");
            sum=0; cont=0;
        }

    }
return 0;
}
