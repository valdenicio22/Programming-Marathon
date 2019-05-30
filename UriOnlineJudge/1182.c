#include <stdio.h>

int main(){

    double sum=0, m[12][12];
    int i, j,x;
    char op[2];
    scanf("%d %s", &x, &op);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf", &m[i][j]);
            if (j==x)
                sum += m[i][j];
        }
    }
    if (op[0] == 'S') printf("%.1lf\n", sum);
    else if(op[0] == 'M') printf("%.1lf\n", sum/12.0);

return 0;
}

