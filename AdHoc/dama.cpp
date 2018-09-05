#include <bits/stdc++.h>

using namespace std;

int main(){

    int x1,y1,x2,y2;
    while (scanf("%d%d%d%d", &x1, &y1, &x2, &y2) && x1+y1+x2+y2 != 0){

        if (x1 == x2 && y1 == y2) cout << "0\n";
        else if (x1==x2 && y1 != y2 ) cout << "1\n";
        else if (y1==y2 && x1 != x2 ) cout << "1\n";
        else if (abs(x1-x2) == abs(y1-y2)) cout << "1\n";
        else cout << "2\n";
    }

return 0;
}
