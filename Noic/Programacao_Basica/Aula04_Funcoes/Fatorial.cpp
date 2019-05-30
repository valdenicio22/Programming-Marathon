#include <bits/stdc++.h>

using namespace std;

int fat(int x){

    if (x==1) return 1;
    return x * fat(x-1);
}

int main(){

    int n;
    cin >> n;
    cout << fat(n) << endl;

return 0;
}
