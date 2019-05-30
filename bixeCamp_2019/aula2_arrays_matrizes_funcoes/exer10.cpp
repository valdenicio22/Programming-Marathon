#include <bits/stdc++.h>
#define MAXN 60
using namespace std;

int m[MAXN][MAXN];

int main(){

    int l, c, cont=0;
    cin >> l >> c;
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            cin >> m[i][j];
        }
    }
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            if (m[i][j.-=- ] == )
        }
    }
    if (l == 1 && c == 1){
        cout << "1" << endl;
        return 0;
    }
    if (m[0][0] == m[0][c-1]) cont++;
    if (m[l-1][0] == m[l-1][c-1]) cont++;
    cout << cont+(l*c) << endl;

return 0;
}
