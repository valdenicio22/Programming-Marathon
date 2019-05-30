#include <stdio.h>

int main(){

    double sum=0, i;
    for(i=1;i<=100;i++){
        sum += 1/i;
    }
    printf("%.2lf\n", sum);

return 0;
}
