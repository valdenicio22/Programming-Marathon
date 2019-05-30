#include <stdio.h>

int main(){

    double n;
    scanf("%lf", &n);
    if (n > 0 && n <= 2000) printf("Isento\n");
    else if(n > 2000 && n <= 3000){
        n =(n - 2000)*0.08;
        printf("R$ %.2lf\n", n);
    }
    else if (n > 3000 && n <= 4500){
        n = ((n - 3000)*0.18) + (1000*0.08);
        printf("R$ %.2lf\n", n);
    }
    else if (n > 4500){
        n = ((n - 4500)*0.28) + (1500*0.18) + (1000*0.08);
        printf("R$ %.2lf\n", n);
    }

return 0;
}
