#include <bits/stdc++.h>
#define senha 2002
using namespace std;

int main(){

    int s, flag=0;
    do{
        scanf("%d", &s);
        if (s == senha) {
            printf("Acesso Permitido\n");
            flag = 1;
        }
        else printf("Senha Invalida\n");
    }while(flag == 0);

return 0;
}
