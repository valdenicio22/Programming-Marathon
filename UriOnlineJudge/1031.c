#include <stdio.h>

int main(){

    int x,y, f=0, i=0, g=0, e=0, cont=0;
    do{
    cont++;
    scanf("%d%d", &x, &y);
    if (x > y) i++;
    else if (y > x) g++;
    else e++;
    printf("Novo grenal (1-sim 2-nao)\n");
    }while(scanf("%d",&f) && f==1);
    printf("%d grenais\n", cont);
    printf("Inter:%d\n", i);
    printf("Gremio:%d\n", g);
    printf("Empates:%d\n", e);
    if (x > y) printf("Inter venceu mais\n");
    else if (y>x) printf("Gremio venceu mais\n");
    else printf("Nao houve vencedor\n");

return 0;
}
