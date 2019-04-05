#include <bits/stdc++.h>

using namespace std;

int main(){

    int n[1000];
    int x, j=0;
    scanf("%d", &x);
    for(int i=0;i<1000;i++){
        printf("N[%d] = %d\n", i, j);
        if (j == x-1) j=0;
        else j++;
    }

return 0;
}
