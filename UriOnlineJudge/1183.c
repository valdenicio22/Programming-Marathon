#include <stdio.h>

int main(){

    int i, j, cont=0;
    double sum=0, v[12][12];
    char op[2];
    scanf("%s", &op);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf", &v[i][j]);
            if(j>i){
                sum += v[i][j];
                cont++;
            }

        }
    }
    if(op[0] == 'S') printf("%.1lf\n", sum);
    else if (op[0] == 'M') printf("%.1lf\n", sum/cont);

return 0;
}
