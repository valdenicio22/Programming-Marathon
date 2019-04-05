#include <bits/stdc++.h>

using namespace std;

int main(){

    double n1, n2, n3, n4, e;
    scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);
    double m = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    printf("Media: %.1lf\n", m);

    if (m >= 7.0) cout << "Aluno aprovado." << endl;
    else if (m < 5.0) cout << "Aluno reprovado." << endl;
    else{
        cout << "Aluno em exame." << endl;
        scanf("%lf", &e);
        printf("Nota do exame: %.1lf\n", e);
        m = (m+e)/2;
        if (m >= 5.0) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n", m);
    }


return 0;
}
