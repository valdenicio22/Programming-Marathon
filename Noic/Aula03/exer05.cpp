#include <bits/stdc++.h>

using namespace std;

int main(){

    double n[100], x;
    scanf("%lf", &x);
    printf("N[0] = %.4lf\n", x);
    for(int i=1;i<100;i++){
        x = x/2;
        printf("N[%d] = %.4lf\n", i, x);
    }

return 0;
}
