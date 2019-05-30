#include <bits/stdc++.h>

using namespace std;

int main(){
    int m = -1, ind= -1, x;
    for(int i=1;i<=100;i++){
        scanf("%d", &x);
        if (x > m) {
            m = x;
            ind = i;
        }
    }
    printf("%d\n%d\n", m, ind);

return 0;
}
