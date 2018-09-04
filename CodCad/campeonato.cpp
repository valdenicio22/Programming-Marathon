#include <bits/stdc++.h>

using namespace std;

int main(){

    int v[100], c=0, f=0;
    for (int i=0;i<6;i++)
        cin >> v[i];
    c = (v[0]*3)+v[1];
    f = (v[3]*3)+v[4];

    if (c > f) cout << "C\n";
    else if (f > c) cout << "F\n";

    if(c == f){
        if (v[2] == v[5]) cout << "=\n";
        else if (v[5] > v[2]) cout << "F\n";
        else cout << "C\n";
    }

return 0;
}
