#include <bits/stdc++.h>

using namespace std;

int main(){

    int b, n, d, c, v;
    while(scanf("%d%d", &b, &n) && b+n != 0){
        bool flag = false;
        int bcs[b+10];
        for (int i=1;i<=b;i++)
            cin >> bcs[i];
        for(int i=1;i<=n;i++){
            cin >> d >> c >> v;
            bcs[d] -= v;
            bcs[c] += v;
        }
        for (int i=1;i<=b;i++){
            if (bcs[i] < 0){
                cout << "N\n";
                flag = true;
                break;
            }
        }
        if (flag == false) cout << "S\n";
    }

return 0;
}
