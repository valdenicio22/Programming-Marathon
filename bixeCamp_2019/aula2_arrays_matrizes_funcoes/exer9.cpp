#include <bits/stdc++.h>
#define MAXN 1010

using namespace std;

int sumL[MAXN], m[MAXN][MAXN] , sumC[MAXN];

int main(){

    int x, res=0;
    cin >> x;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            cin >> m[i][j];
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            sumL[i] += m[i][j];
            sumC[i] += m[j][i];
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            res = max(res,((sumL[i]+sumC[j]) - (2*m[i][j]) ));
        }
    }
    cout << res << endl;

return 0;
}
