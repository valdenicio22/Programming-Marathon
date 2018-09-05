#include <bits/stdc++.h>

using namespace std;

int main(){

    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    if (a==b || b==c || c==a || a+b == c || a+c == b || b+c == a) cout << "S\n";
    else cout << "N\n";

return 0;
}
