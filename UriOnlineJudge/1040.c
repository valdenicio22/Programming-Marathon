#include <stdio.h>

int main(){

    double n1,n2,n3,n4, m=0, e;
    scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);
    m = ((n1*2) + (n2*3) + (n3*4) + (n4*1))/10;
    printf("Media: %.1lf\n", m);
    if(m >= 7) printf("Aluno aprovado.\n");
    else if (m >= 5){
        printf("Aluno em exame.\n");
        scanf("%lf", &e);
        printf("Nota do exame: %.1lf\n", e);
        m = (m+e)/2;
        if (m >= 5) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n", m);
    }
    else printf("Aluno reprovado.\n");

return 0;
}
