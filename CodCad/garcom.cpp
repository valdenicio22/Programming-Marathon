#include <bits/stdc++.h>

using namespace std;

int main (){

    int x, l, c, aux=0;
    cin >> x;
    for (int i=0;i<x;i++){
        cin >> l >> c;
        if (l > c) aux += c;
    }
    cout << aux << endl;


return 0;
}
