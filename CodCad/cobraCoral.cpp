#include <bits/stdc++.h>

using namespace std;

int main(){

    int v[100],s=0;
    for (int i=0;i<4;i++)
        cin >> v[i];

    if (v[0] == v[2] || v[1] == v[3]) cout << "V\n";
    else cout << "F\n";

return 0;
}
