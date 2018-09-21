#include <stdio.h>

int main(){

    int p[50], cp=0, im[50], ci=0, i,v,j;
    for(i=0;i<15;i++){
        scanf("%d", &v);
        if(v%2==0){
            p[cp] = v;
            cp++;

        }
        else{
            im[ci] = v;
            ci++;
        }
        if(cp == 5){
            for(j=0;j<cp;j++)
                printf("par[%d] = %d\n", j, p[j]);
            cp=0;
        }
        else if (ci == 5){
            for(j=0;j<ci;j++)
                printf("impar[%d] = %d\n", j, im[j]);
            ci=0;
        }
    }
    for(j=0;j<ci;j++)
        printf("impar[%d] = %d\n", j, im[j]);
    for(j=0;j<cp;j++)
        printf("par[%d] = %d\n", j, p[j]);

return 0;
}
