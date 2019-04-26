#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, cont=0;
    cin >> n;
    string x;
    cin >> x;
    char z = x[0];
    for(int i=1;i<x.length();i++){
        if (z == x[i]) cont++;
        z = x[i];
    }
    cout << cont << endl;
return 0;
}
