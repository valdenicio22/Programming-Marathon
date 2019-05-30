#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x;
    scanf("%d%d", &n, &x);
    if (x%n == 0 || n%x == 0)printf("Sao Multiplos\n");
    else printf("Nao sao Multiplos\n");

return 0;
}
