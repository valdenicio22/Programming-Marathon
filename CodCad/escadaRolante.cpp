#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x, aux=0, s=0;
    cin >> n >> x;
    if(x > aux) s = x;
    aux = x+10;
    for (int i=0;i<n-1;i++){
        cin >> x;
        if (aux > x) aux = x+10;
        else {
            s += x-aux;
            aux = x+10;
        }
    }
    cout << (aux-s) << endl;

return 0;
}
