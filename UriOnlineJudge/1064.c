#include <stdio.h>

int main(){

    double n, sum=0;
    int i, cont=0;
    for (i=0;i<6;++i){
        scanf("%lf", &n);
        if (n > 0.0){
            cont++;
            sum += n;
        }
    }
    printf("%d valores positivos\n", cont);
    printf("%.1lf\n", sum/cont);

return 0;
}
