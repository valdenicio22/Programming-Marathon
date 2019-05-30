#include <bits/stdc++.h>

using namespace std;

int wall (int x){

    int v[55];
    v[0] = v[1] = 1;
    for(int i=2;i<=50;i++){
        v[i] = v[i-1] + v[i-2];
    }
    return v[x];
}

int main(){

    int n;
    while(cin >> n && n){
        cout << wall(n) << endl;
    }

return 0;
}
