#include <stdio.h>

int main(){

    double x, sum=0;
    int cont=0;
    while(scanf("%lf" ,&x) && x > 0){
        sum +=x;
        cont++;
    }
    printf("%.2lf\n", sum/cont);

return 0;
}
