#include <stdio.h>

int main(){

    int x ,i, contP=0,contN=0, P=0, I=0;
    for (i=0;i<5;i++){
        scanf("%d", &x);
        if (x>0) contP++;
        else if (x < 0) contN++;
        if (x%2==0) P++;
        else I++;
    }
    printf("%d valor(es) par(es)\n", P);
    printf("%d valor(es) impar(es)\n", I);
    printf("%d valor(es) positivo(s)\n", contP);
    printf("%d valor(es) negativo(s)\n", contN);

return 0;
}
