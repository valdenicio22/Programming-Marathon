#include <bits/stdc++.h>

using namespace std;

int main(){

    char l;
    double a,b;
    cin >> l >> a >> b;
    if (l == 'M') printf("%.2lf\n", (a*b));
    else if (l == 'D') printf("%.2lf\n", (a/b));

return 0;
}
