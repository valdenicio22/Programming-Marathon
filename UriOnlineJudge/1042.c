#include <stdio.h>

void ordenaC(int v[]){
    int i, j, aux=0;
    for (i=0;i<3;i++){
        for (j=0;j<3-1;j++){
            if(v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

int main(){

    int v[100],c[100], i;
    for (i=0;i<3;i++){
        scanf("%d", &v[i]);
        c[i] = v[i];
    }

    ordenaC(v);
    for (i=0;i<3;i++)
        printf("%d\n", v[i]);
    printf("\n");
    for (i=0;i<3;i++)
        printf("%d\n", c[i]);

return 0;
}
