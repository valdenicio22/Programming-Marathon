#include <bits/stdc++.h>
#define max 100
using namespace std;

int main(){

    int n, b, va[max], v[max];
    while(scanf("%d%d", &n, &b) && n+b != 0){
        int flag[n+1], f=0;
        memset(flag,0,sizeof(flag));
        for (int i=0;i<b;i++)
            cin >> v[i];
        for (int i=0;i<b;i++){
            for(int j=0;j<b;j++){
                va[i] = abs(v[i] - v[j]);
                if (va[i] <= n && flag[va[i]] == 0)
                    flag[va[i]] = 1;
            }
        }
        for (int i=0;i<=n;i++)
            if (flag[i] == 0){
                f=1;
                break;
            }
        if (f==1) cout << "N\n";
        else cout << "Y\n";
    }


return 0;
}
