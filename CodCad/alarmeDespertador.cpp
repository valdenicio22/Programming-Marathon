#include <bits/stdc++.h>

using namespace std;

int main(){

    int h1, m1, h2, m2;
    while(scanf("%d%d%d%d", &h1, &m1, &h2, &m2) && h1+m1+h2+m2 != 0){
        if (h1 > h2) h2 += 24;
        else if (h1 == h2 && m1>m2) h2 += 24;

        m1 = h1*60 + m1;
        m2 = h2*60 + m2;
        printf("%d\n", abs(m2-m1));
    }
return 0;
}
