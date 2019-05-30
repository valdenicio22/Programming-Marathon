#include <stdio.h>

int main(){

    int x, contA=0, contG=0, contD=0;
    while(scanf("%d", &x) && x !=4){
        if (x >= 1 && x <= 3){
            if(x == 1) contA++;
            else if(x == 2) contG++;
            else contD++;
        }
        else continue;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", contA);
    printf("Gasolina: %d\n", contG);
    printf("Diesel: %d\n", contD);


return 0;
}
