#include <stdio.h>

int main (){

char T;
int i, n, vC=0, vR=0, vS=0, total=0, v;
scanf("%d", &n);

for (i=0; i<n; i++){
scanf("%d %c", &v, &T);

if (T == 'C')
    vC += v;
if (T == 'R')
    vR += v;
if (T == 'S')
    vS += v;
}

total = vC+vR+vS;

printf("Total: %d cobaias\n", total);
printf("Total de coelhos: %d\n", vC);
printf("Total de ratos: %d\n", vR);
printf("Total de sapos: %d\n", vS);

printf("Percentual de coelhos: %.2f %%\n", (float)vC/total*100);
printf("Percentual de ratos: %.2f %%\n", (float)vR/total*100);
printf("Percentual de sapos: %.2f %%\n", (float)vS/total*100);

return 0;
}
