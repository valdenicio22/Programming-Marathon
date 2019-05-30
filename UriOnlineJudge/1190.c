#include <stdio.h>

int main(){

    double m[12][12], sum=0;
    int i, j, cont=0, aux=0;
    char op[1];
    scanf("%s", &op);
    for(i=0;i<12;i++)
        for(j=0;j<12;j++)
            scanf("%lf", &m[i][j]);
    for(j=7;j<=11;j++){
        for(i=5-aux;i<=6+aux;i++){
            sum+=m[i][j];
            cont++;
        }
        aux++;
    }
    if(op[0] == 'S') printf("%.1lf\n", sum);
    else if (op[0] == 'M') printf("%.1lf\n", sum/cont);

return 0;
}
