#include <bits/stdc++.h>

using namespace std;

int main(){
    int v[100], l, r;
    for (int i=0;i<4;i++)
        cin >> v[i];
    l = v[0]*v[1];
    r = v[2]*v[3];
    if (l == r) cout << "0\n";
    else if (l > r) cout << "-1\n";
    else cout << "1\n";

return 0;
}
