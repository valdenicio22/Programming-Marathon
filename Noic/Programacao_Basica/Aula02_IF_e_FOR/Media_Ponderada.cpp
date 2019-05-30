#include <bits/stdc++.h>

using namespace std;

int main(){

    int x;
    scanf("%d", &x);
    for (int i=0;i<x;i++){
        double n1, n2, n3;
        scanf("%lf%lf%lf", &n1, &n2, &n3);
        double m = ((n1*2)+(n2*3)+(n3*5))/10;
        printf("%.1lf\n", m);
    }
return 0;
}
