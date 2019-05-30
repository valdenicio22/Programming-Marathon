#include <stdio.h>

int main(){

    int n, i, pa, pb, cont=0;
    double ca, cb;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        cont=0;
        scanf("%d %d %lf %lf", &pa, &pb, &ca, &cb);
        while(pa <= pb){
            cont++;
            pa += ((pa*ca)/100);
            pb += ((pb*cb)/100);
            if(cont > 100){
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(cont <= 100)
            printf("%d anos.\n", cont);
    }
return 0;
}
