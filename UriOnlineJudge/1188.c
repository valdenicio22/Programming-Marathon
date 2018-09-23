#include <stdio.h>

int main(){

    double sum=0, m[12][12];
    int i, j, aux=0,cont=0;
    char op[1];
    scanf("%s", &op);
    for(i=0;i<12;i++)
        for(j=0;j<12;j++)
            scanf("%lf", &m[i][j]);
    for(i=7;i<=11;i++){
        for(j=5-aux;j<=6+aux;j++){
            sum+=m[i][j];
            cont++;
        }
        aux++;
    }
    if(op[0] == 'S') printf("%.1lf\n", sum);
    else if (op[0] == 'M') printf("%.1lf\n", sum/cont);

return 0;
}
