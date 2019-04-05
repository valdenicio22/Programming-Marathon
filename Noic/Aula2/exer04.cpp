#include <bits/stdc++.h>

using namespace std;

int main(){

    int op, qtd;
    scanf("%d%d", &op, &qtd);
    if (op == 1) printf("Total: R$ %.2f\n", qtd*4.00);
    else if (op == 2) printf("Total: R$ %.2f\n", qtd*4.50);
    else if (op == 3) printf("Total: R$ %.2f\n", qtd*5.00);
    else if (op == 4) printf("Total: R$ %.2f\n", qtd*2.00);
    else if (op == 5) printf("Total: R$ %.2f\n", qtd*1.50);

return 0;
}
