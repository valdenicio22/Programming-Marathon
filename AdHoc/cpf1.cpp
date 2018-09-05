#include <bits/stdc++.h>

using namespace std;

int main(){

    char v[10000];

    while(scanf("%s", v) != EOF){
    int b1=0, b2=0, aux[10000];

    for (int i=0, j=0;i<15;i++){
        if (v[i] == '.' || v[i] == '-') continue;
        else{
            aux[j] = v[i] - '0';
            j++;
        }
    }
    for (int i=0;i<9;i++)
        b1 += aux[i] * (i+1);
    b1 = b1%11;
    if (b1 == 10)
        b1 = 0;

    for (int i=0, j=9;i<9;i++, j--)
        b2 += aux[i] * j;
    b2 = b2%11;
    if (b2 == 10)
        b2 = 0;

    if (b1 == aux[9] && b2 == aux[10])
        printf("CPF valido\n");
    else
        printf("CPF invalido\n");
    }
return 0;
}
