#include <bits/stdc++.h>

using namespace std;

int main(){

    int m, x, y;
    char l;
    cin >> m >> x >> l >> y;
    if (l == '+')
        if (x+y <= m) printf("OK\n");
        else printf("OVERFLOW\n");
    else if (l == '*')
        if (x*y <= m) printf("OK\n");
        else printf("OVERFLOW\n");


return 0;
}
