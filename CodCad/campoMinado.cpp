#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, v[100], y[100];
    cin >> x;
    for (int i=0;i<x;i++)
        cin >> v[i];
    for (int i=0;i<x;i++){
        if (i==0) y[i] = v[i] + v[i+1];
        else if (i==x-1) y[i] = v[i-1] + v[i];
        else y[i] = v[i-1] + v[i] + v[i+1];
    }
    for (int i=0;i<x;i++)
        cout << y[i] << endl;

return 0;
}
