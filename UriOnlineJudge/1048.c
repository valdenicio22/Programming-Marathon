#include <stdio.h>

int main(){

    double x, a, p=0;
    scanf("%lf", &x);
    if (x > 0 && x <= 400.00){
        a = x*15/100;
        x = a+x;
        p=15;
    }
    else if (x>400.00 && x <= 800.00){
        a = x*12/100;
        x = a+x;
        p=12;
    }
    else if(x>800.00 && x <= 1200.00){
        a = x*10/100;
        x = a+x;
        p=10;
    }
    else if(x>1200.00 && x <= 2000.00){
        a = x*7/100;
        x = a+x;
        p=7;
    }
    else{
        a = x*4/100;
        x = a+x;
        p=4;
    }
    printf("Novo salario: %.2lf\n", x);
    printf("Reajuste ganho: %.2lf\n", a);
    printf("Em percentual: %.0lf %%\n", p);


return 0;
}
