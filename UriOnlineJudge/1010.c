#include <stdio.h>

int main(){

    int c, u, i;
    double v, aux=0;
    for (i=0;i<2;i++){
        scanf("%d%d%lf", &c, &u, &v);
        aux += u*v;
    }
    printf("VALOR A PAGAR: R$ %.2lf\n", aux);

return 0;
}
