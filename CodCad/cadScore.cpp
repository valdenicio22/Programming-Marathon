#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, n, p;
    scanf("%d%d", &x, &n);
    for (int i=0;i<n;i++){
        cin >> p;
        x +=p;
        if (x > 100) x = 100;
        if (x < 0) x = 0;
    }
    cout << x << endl;

return 0;
}
