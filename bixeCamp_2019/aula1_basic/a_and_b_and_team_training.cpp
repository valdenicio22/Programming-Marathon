#include <bits/stdc++.h>

using namespace std;

int team (int e, int n){
    int cont=0;
    if (n > e) swap(e, n);
    while(e >= 2 && n >= 1){
        cont++;
        e -=2;
        n --;
        if (n > e) swap(e, n);
    }
    return cont;
}

int main(){

    int e, n;
    cin >> e >> n;
    cout << team(e,n) << endl;

return 0;
}
